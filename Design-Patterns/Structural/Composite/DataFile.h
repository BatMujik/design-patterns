#pragma once
#include "StorageItem.h" 

class DataFile : public StorageItem {
private:
    std::string fileName;
    long long fileSize;

public:
    DataFile(const std::string& name, long long size);
    long long calculateSize() const override;
    void show(int indentLevel = 0) const override;
};
