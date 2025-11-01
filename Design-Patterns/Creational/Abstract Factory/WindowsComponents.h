#pragma once
#include "UIComponent.h"

// Windows-style button implementation
class WindowsButton : public IButton {
public:
    void render() const override {
        std::cout << "Rendering a Windows-style button." << std::endl;
    }
};

// Windows-style checkbox implementation
class WindowsCheckbox : public ICheckbox {
public:
    void render() const override {
        std::cout << "Rendering a Windows-style checkbox." << std::endl;
    }
};
