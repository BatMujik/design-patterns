#pragma once

#include "Doc.h"
#include <memory>

// Base application class (Creator)
class App {
public:
    virtual ~App() = default;

    virtual std::unique_ptr<Doc> makeDocument() = 0;

    void createNewDocument() {
        std::cout << "App: Executing core business logic." << std::endl;
        std::unique_ptr<Doc> document = makeDocument();
        document->openFile();
        document->closeFile();
    }
};

// Text editor application
class TextEditor : public App {
public:
    std::unique_ptr<Doc> makeDocument() override {
        std::cout << "TextEditor: Instantiating PlainTextDoc." << std::endl;
        return std::make_unique<PlainTextDoc>();
    }
};

// Spreadsheet application
class SpreadsheetEditor : public App {
public:
    std::unique_ptr<Doc> makeDocument() override {
        std::cout << "SpreadsheetEditor: Instantiating ExcelDoc." << std::endl;
        return std::make_unique<ExcelDoc>();
    }
};
