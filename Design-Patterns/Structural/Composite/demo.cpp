#include <iostream>
#include <memory>  

#include "DataFile.h"
#include "Folder.h"

int main() {
    std::cout << "==========================================" << std::endl;
    std::cout << "   Storage System Demo (Composite)        " << std::endl;
    std::cout << "==========================================" << std::endl << std::endl;
 
    auto rootFolder = std::make_shared<Folder>("root");
 
    auto docsFolder = std::make_shared<Folder>("Documents");
    auto imagesFolder = std::make_shared<Folder>("Images");
    auto audioFolder = std::make_shared<Folder>("Audio");
 
    rootFolder->addItem(docsFolder);
    rootFolder->addItem(imagesFolder);
    rootFolder->addItem(audioFolder);

    // Adding files to Documents
    docsFolder->addItem(std::make_shared<DataFile>("report.docx", 2048));
    docsFolder->addItem(std::make_shared<DataFile>("notes.txt", 512));

    // Adding files to Images
    imagesFolder->addItem(std::make_shared<DataFile>("photo1.jpg", 4096));
    imagesFolder->addItem(std::make_shared<DataFile>("logo.png", 1024));

    // Adding files to Audio
    audioFolder->addItem(std::make_shared<DataFile>("track1.mp3", 5120));
    audioFolder->addItem(std::make_shared<DataFile>("track2.mp3", 6144));

    rootFolder->addItem(std::make_shared<DataFile>("config.sys", 256));

    auto vacationFolder = std::make_shared<Folder>("Vacation2023");
    vacationFolder->addItem(std::make_shared<DataFile>("beach.jpg", 3072));
    vacationFolder->addItem(std::make_shared<DataFile>("mountain.jpg", 3584));
    imagesFolder->addItem(vacationFolder);

    std::cout << "--- Displaying complete storage structure ---" << std::endl;
    rootFolder->show();
    std::cout << std::endl;

    std::cout << "--- Computing sizes of various components ---" << std::endl;
 
    auto tempFile = std::make_shared<DataFile>("temp_report.docx", 1234);
    std::cout << "Size of single file (temp_report.docx): " << tempFile->calculateSize() << " bytes" << std::endl;
 
    std::cout << "Total size of 'Images' folder: " << imagesFolder->calculateSize() << " bytes" << std::endl;
 
    std::cout << "Total size of entire storage ('root'): " << rootFolder->calculateSize() << " bytes" << std::endl;

    return 0;
}
