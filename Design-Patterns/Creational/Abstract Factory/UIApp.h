#pragma once

#include "ComponentFactory.h"
#include <memory>

class UIApp {
private:
    std::unique_ptr<IButton> buttonComponent;
    std::unique_ptr<ICheckbox> checkboxComponent;
    const ComponentFactory& componentFactory;

public:
    UIApp(const ComponentFactory& factory);
    void initializeUI();
};
