#include "UIApp.h"
#include "WindowsComponentFactory.h"
#include "AppleComponentFactory.h"
#include <string>

void runApplication(const ComponentFactory& factory) {
    UIApp application(factory);
    application.initializeUI();
}

int main() {
    std::string platform = "Windows"; 
    
    std::cout << "Client: Configuring application for " << platform << " platform" << std::endl;

    if (platform == "Windows") {
        WindowsComponentFactory windowsFactory;
        runApplication(windowsFactory);
    } else if (platform == "macOS") {
        AppleComponentFactory appleFactory;
        runApplication(appleFactory);
    } else {
        std::cerr << "Error: Unsupported platform." << std::endl;
        return 1;
    }

    platform = "macOS";
    std::cout << "\nClient: Switching application configuration to " << platform << " platform" << std::endl;

    if (platform == "macOS") {
        AppleComponentFactory appleFactory;
        runApplication(appleFactory);
    }

    return 0;
}
