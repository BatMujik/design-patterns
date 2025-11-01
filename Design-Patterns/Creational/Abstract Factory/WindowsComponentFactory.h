#pragma once
#include "ComponentFactory.h"
#include "WindowsComponents.h"

// Factory for creating Windows components
class WindowsComponentFactory : public ComponentFactory {
public:
    std::unique_ptr<IButton> makeButton() const override {
        return std::make_unique<WindowsButton>();
    }
    
    std::unique_ptr<ICheckbox> makeCheckbox() const override {
        return std::make_unique<WindowsCheckbox>();
    }
};
