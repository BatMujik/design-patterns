#pragma once

#include "GraphicElement.h"
#include <map>
#include <string>
#include <memory>

class ElementCache {
private:
    std::map<std::string, std::unique_ptr<GraphicElement>> cachedElements;

public:
    void registerElement(const std::string& identifier, std::unique_ptr<GraphicElement> element) {
        cachedElements[identifier] = std::move(element);
    }

    std::unique_ptr<GraphicElement> getElement(const std::string& identifier) {
        if (cachedElements.count(identifier)) {
            return cachedElements.at(identifier)->duplicate();
        }
        return nullptr; 
    }
};
