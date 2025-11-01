#include "App.h"
#include <iostream>
#include <memory>

void executeApp(App& application) {
    application.createNewDocument();
}

int main() {
    std::cout << "--- Running TextEditor ---" << std::endl;
    TextEditor textEditor;
    executeApp(textEditor);

    std::cout << "\n-------------------------------------\n" << std::endl;

    std::cout << "--- Running SpreadsheetEditor ---" << std::endl;
    SpreadsheetEditor spreadsheetEditor;
    executeApp(spreadsheetEditor);

    return 0;
}
