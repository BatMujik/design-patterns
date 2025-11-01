#pragma once

#include <iostream>
#include <string>
 
// Base class for documents
class Doc {
public:
    virtual ~Doc() = default;
    virtual void openFile() const = 0;
    virtual void saveFile() const = 0;
    virtual void closeFile() const = 0;
};

// Plain text document
class PlainTextDoc : public Doc {
public:
    void openFile() const override {
        std::cout << "Opening Plain Text File..." << std::endl;
    }
    void saveFile() const override {
        std::cout << "Saving Plain Text File..." << std::endl;
    }
    void closeFile() const override {
        std::cout << "Closing Plain Text File..." << std::endl;
    }
};

// Excel document
class ExcelDoc : public Doc {
public:
    void openFile() const override {
        std::cout << "Opening Excel Spreadsheet..." << std::endl;
    }
    void saveFile() const override {
        std::cout << "Saving Excel Spreadsheet..." << std::endl;
    }
    void closeFile() const override {
        std::cout << "Closing Excel Spreadsheet..." << std::endl;
    }
};
