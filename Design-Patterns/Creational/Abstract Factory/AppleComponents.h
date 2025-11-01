#pragma once
#include "UIComponent.h"

// Apple-style button implementation
class AppleButton : public IButton {
public:
    void render() const override {
        std::cout << "Rendering an Apple macOS button." << std::endl;
    }
};

// Apple-style checkbox implementation
class AppleCheckbox : public ICheckbox {
public:
    void render() const override {
        std::cout << "Rendering an Apple macOS checkbox." << std::endl;
    }
};
