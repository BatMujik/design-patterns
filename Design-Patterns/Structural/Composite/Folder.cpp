#include "Folder.h"
#include <iostream>
#include <algorithm> 

Folder::Folder(const std::string& name) : folderName(name) {}

void Folder::addItem(std::shared_ptr<StorageItem> item) {
    items.push_back(item);
}

void Folder::removeItem(std::shared_ptr<StorageItem> item) {
    auto iterator = std::find(items.begin(), items.end(), item);
    if (iterator != items.end()) {
        items.erase(iterator);
    }
}

long long Folder::calculateSize() const {
    long long total = 0;

    std::cout << "[DEBUG] Computing size for folder: " << folderName << std::endl;

    for (const auto& item : items) {
        total += item->calculateSize();  
    }
    return total;
}

void Folder::show(int indentLevel) const {
    std::cout << std::string(indentLevel, ' ') << "+ " << folderName << "/"
              << " (total size: " << this->calculateSize() << " bytes)" << std::endl;

    for (const auto& item : items) {
        item->show(indentLevel + 4);
    }
}
