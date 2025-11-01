#include "PC.h"
#include "PCBuilder.h"
#include "SystemConfigurator.h"
#include <memory>

int main() {
    std::cout << "--- Building a Gaming System using Configurator ---" << std::endl;
    PCBuilder gamingSystemBuilder;
    SystemConfigurator configurator;

    configurator.buildGamingSystem(gamingSystemBuilder);
    std::unique_ptr<PC> gamingSystem = gamingSystemBuilder.construct();
    gamingSystem->displaySpecs();

    std::cout << "--- Building a Workstation using Configurator ---" << std::endl;
    PCBuilder workstationBuilder;
    configurator.buildWorkstation(workstationBuilder);
    std::unique_ptr<PC> workstation = workstationBuilder.construct();
    workstation->displaySpecs();

    std::cout << "--- Building a custom PC directly with builder ---" << std::endl;
    PCBuilder customSystemBuilder;
    std::unique_ptr<PC> customSystem = customSystemBuilder
                                            .withProcessor("AMD Ryzen 7")
                                            .withMemory("16GB DDR4")
                                            .withDisk("1TB NVMe SSD")
                                            .construct();
    customSystem->displaySpecs();

    return 0;
}
