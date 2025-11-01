#pragma once

#include <iostream>
#include <string>

class PCBuilder;

class PC {
private:
    std::string processor;
    std::string memory;
    std::string disk;
    std::string graphicsCard; 

    PC() = default;
    friend class PCBuilder;

public:
    void displaySpecs() const {
        std::cout << "PC Specifications:" << std::endl;
        std::cout << "  Processor: " << processor << std::endl;
        std::cout << "  Memory: " << memory << std::endl;
        std::cout << "  Disk: " << disk << std::endl;
        if (!graphicsCard.empty()) {
            std::cout << "  Graphics Card: " << graphicsCard << std::endl;
        } else {
            std::cout << "  Graphics Card: Onboard" << std::endl;
        }
        std::cout << "-------------------------" << std::endl;
    }
};
