#pragma once
#include <iostream>
#include <string>

// Base interface for buttons
class IButton {
public:
    virtual ~IButton() = default;
    virtual void render() const = 0;
};

// Base interface for checkboxes
class ICheckbox {
public:
    virtual ~ICheckbox() = default;
    virtual void render() const = 0;
};
