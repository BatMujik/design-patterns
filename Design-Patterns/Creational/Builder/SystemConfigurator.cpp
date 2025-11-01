#include "SystemConfigurator.h"
#include "PCBuilder.h"

void SystemConfigurator::buildGamingSystem(PCBuilder& builder) {
    builder.withProcessor("Intel Core i9-13900K")
           .withMemory("32GB DDR5")
           .withDisk("2TB NVMe SSD")
           .withGraphicsCard("NVIDIA RTX 4090");
}

void SystemConfigurator::buildWorkstation(PCBuilder& builder) {
    builder.withProcessor("Intel Core i5-12600")
           .withMemory("16GB DDR4")
           .withDisk("512GB SATA SSD"); 
}
