#pragma once

#include "UIComponent.h"
#include <memory>

// Factory interface for creating UI components
class ComponentFactory {
public:
    virtual ~ComponentFactory() = default;
    virtual std::unique_ptr<IButton> makeButton() const = 0;
    virtual std::unique_ptr<ICheckbox> makeCheckbox() const = 0;
};
