#include "printer.h"

// Adapter class to make the LegacyPrinter compatible with
// ModernComputer
class PrinterAdapter {
   private:
    LegacyPrinter legacyPrinter;

   public:
    void sendCommand(const std::string &command);
};