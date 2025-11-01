#include "PCBuilder.h"
#include "PC.h" 

PCBuilder::PCBuilder() {
    pcObject = std::unique_ptr<PC>(new PC());
}

PCBuilder& PCBuilder::withProcessor(const std::string& cpu) {
    pcObject->processor = cpu;
    return *this;
}

PCBuilder& PCBuilder::withMemory(const std::string& ram) {
    pcObject->memory = ram;
    return *this;
}

PCBuilder& PCBuilder::withDisk(const std::string& storage) {
    pcObject->disk = storage;
    return *this;
}

PCBuilder& PCBuilder::withGraphicsCard(const std::string& gpu) {
    pcObject->graphicsCard = gpu;
    return *this;
}

std::unique_ptr<PC> PCBuilder::construct() {
    return std::move(pcObject);
}
