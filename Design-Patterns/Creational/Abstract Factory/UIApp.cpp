#include "UIApp.h"
#include <iostream>

UIApp::UIApp(const ComponentFactory& factory) : componentFactory(factory) {}

void UIApp::initializeUI() {
    std::cout << "UIApp: Building interface elements with the given factory." << std::endl;
    
    buttonComponent = componentFactory.makeButton();
    checkboxComponent = componentFactory.makeCheckbox();
    
    buttonComponent->render();
    checkboxComponent->render();
}
