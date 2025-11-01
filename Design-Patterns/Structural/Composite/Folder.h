#pragma once
#include "StorageItem.h"
#include <vector>
#include <memory>  

class Folder : public StorageItem {
private:
    std::string folderName;
    std::vector<std::shared_ptr<StorageItem>> items;

public:
    Folder(const std::string& name);
    void addItem(std::shared_ptr<StorageItem> item);
    void removeItem(std::shared_ptr<StorageItem> item);
    long long calculateSize() const override;
    void show(int indentLevel = 0) const override;
};
