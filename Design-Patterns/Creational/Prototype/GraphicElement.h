#pragma once

#include <iostream>
#include <string>
#include <memory>

class GraphicElement {
protected:
    std::string fillColor;

public:
    GraphicElement(const std::string& color) : fillColor(color) {}
    virtual ~GraphicElement() = default;

    virtual std::unique_ptr<GraphicElement> duplicate() const = 0;
    virtual void render() const = 0;
};

class Ellipse : public GraphicElement {
private:
    int radiusValue;

public:
    Ellipse(const std::string& color, int radius) 
        : GraphicElement(color), radiusValue(radius) {}

    std::unique_ptr<GraphicElement> duplicate() const override {
        return std::make_unique<Ellipse>(*this);
    }

    void render() const override {
        std::cout << "Rendering a " << fillColor << " ellipse with radius " 
                  << radiusValue << "." << std::endl;
    }
};

class Box : public GraphicElement {
private:
    int boxWidth;
    int boxHeight;

public:
    Box(const std::string& color, int width, int height)
        : GraphicElement(color), boxWidth(width), boxHeight(height) {
    }

    std::unique_ptr<GraphicElement> duplicate() const override {
        return std::make_unique<Box>(*this);
    }

    void render() const override {
        std::cout << "Rendering a " << fillColor << " box of dimensions "
                  << boxWidth << "x" << boxHeight << "." << std::endl;
    }
};
