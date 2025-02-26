#include "ConcreteCommand.hpp"
#include "ConcreteReceiver.hpp"

class Invoker {
   private:
    Command* command;
   public:
    void setCommand(Command* command) { this->command = command; }
    void executeCommand() { command->execute(); }
};

int main() {
    Receiver* receiver = new ConcreteReceiver();
    Command* command = new ConcreteCommand(receiver);

    Invoker invoker;
    invoker.setCommand(command);
    invoker.executeCommand();
}