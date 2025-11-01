#include "GraphicElement.h"
#include "ElementCache.h"
#include <vector>

int main() {
    ElementCache cache;

    cache.registerElement("LargeRedEllipse", std::make_unique<Ellipse>("Red", 20));
    cache.registerElement("TinyBlueBox", std::make_unique<Box>("Blue", 10, 5));

    std::cout << "--- Creating objects from cached prototypes ---" << std::endl;

    auto element1 = cache.getElement("LargeRedEllipse");
    auto element2 = cache.getElement("TinyBlueBox");
    auto element3 = cache.getElement("LargeRedEllipse"); 

    std::cout << "\n--- Checking object addresses ---" << std::endl;
    std::cout << "Original prototype is stored in cache." << std::endl;
    std::cout << "Address of duplicated element1 (Ellipse): " << element1.get() << std::endl;
    std::cout << "Address of duplicated element3 (Ellipse): " << element3.get() << std::endl;
    if (element1.get() != element3.get()) {
        std::cout << "Confirmed: element1 and element3 are separate instances." << std::endl;
    }

    std::cout << "\n--- Rendering all created elements ---" << std::endl;
    std::vector<GraphicElement*> allElements;
    if (element1) allElements.push_back(element1.get());
    if (element2) allElements.push_back(element2.get());
    if (element3) allElements.push_back(element3.get());

    for (const auto& elem : allElements) {
        elem->render();
    }

    return 0;
}
