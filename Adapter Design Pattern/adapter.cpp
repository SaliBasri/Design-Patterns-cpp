#include "adapter.h"

void PrinterAdapter::sendCommand(const std::string &command) {
    // Convert the command to uppercase and pass it to
    // the LegacyPrinter
    std::string uppercaseCommand = command;
    for (char &c : uppercaseCommand) {
        c = std::toupper(c);
    }
    legacyPrinter.printInUppercase(uppercaseCommand);
}