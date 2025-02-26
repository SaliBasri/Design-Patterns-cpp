#include <iostream>

#include "Receiver.hpp"

class ConcreteReceiver : public Receiver {
   public:
    void performAction() override;
};

void ConcreteReceiver::performAction() {
    std::cout << "Performing action" << std::endl;
}