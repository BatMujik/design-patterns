#pragma once

#include <string>
#include <memory> 
 
class PC;

class PCBuilder {
private:
    std::unique_ptr<PC> pcObject;

public:
    PCBuilder();
 
    PCBuilder& withProcessor(const std::string& cpu);
    PCBuilder& withMemory(const std::string& ram);
    PCBuilder& withDisk(const std::string& storage);
    PCBuilder& withGraphicsCard(const std::string& gpu);
 
    std::unique_ptr<PC> construct();
};
