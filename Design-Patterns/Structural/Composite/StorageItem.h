#pragma once
#include <string> 

class StorageItem {
public:
    virtual long long calculateSize() const = 0;
    virtual void show(int indentLevel = 0) const = 0;
    virtual ~StorageItem() = default;
};
