#include "Command.hpp"
#include "Receiver.hpp"

class ConcreteCommand : public Command {
   private:
    Receiver* receiver;

   public:
    ConcreteCommand(Receiver* receiver) : receiver(receiver) {}

    void execute() override;
};

void ConcreteCommand::execute() { receiver->performAction(); }