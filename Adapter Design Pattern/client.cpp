#include <iostream>
#include <string>

#include "adapter.h"
#include "printer.h"

// Modern Computer (Client)
class ModernComputer {
   public:
    void sendCommand(const std::string &command) {
        std::cout << "Sending command: " << command << std::endl;
    }
};

int main() {
    ModernComputer computer;
    PrinterAdapter adapter;

    computer.sendCommand("Print this in lowercase");
    adapter.sendCommand("Print this in lowercase (adapted)");

    return 0;
}