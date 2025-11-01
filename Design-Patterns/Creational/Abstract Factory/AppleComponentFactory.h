#pragma once
#include "ComponentFactory.h"
#include "AppleComponents.h"

// Factory for creating Apple macOS components
class AppleComponentFactory : public ComponentFactory {
public:
    std::unique_ptr<IButton> makeButton() const override {
        return std::make_unique<AppleButton>();
    }
    
    std::unique_ptr<ICheckbox> makeCheckbox() const override {
        return std::make_unique<AppleCheckbox>();
    }
};
