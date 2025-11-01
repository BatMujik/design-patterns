#include "DataFile.h"
#include <iostream>

DataFile::DataFile(const std::string& name, long long size)
    : fileName(name), fileSize(size) {
}

long long DataFile::calculateSize() const {
    return fileSize;
}

void DataFile::show(int indentLevel) const {
    std::cout << std::string(indentLevel, ' ') << "- " << fileName
              << " (" << fileSize << " bytes)" << std::endl;
}
