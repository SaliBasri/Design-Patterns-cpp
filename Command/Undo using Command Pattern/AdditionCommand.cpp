#include "AdditionCommand.hpp"

void AdditionCommand::execute() { receiver->performAddition(value); }

void AdditionCommand::unExecute() {
    // Note that this is the opposite of the execute method
    receiver->performSubtraction(value);
}

void AdditionCommand::setValue(int value) { this->value = value; }