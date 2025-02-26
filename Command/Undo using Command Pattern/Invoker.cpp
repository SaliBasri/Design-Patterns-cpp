#include "Invoker.hpp"

#include <iostream>

Invoker::Invoker(Calculator* receiver) : receiver(receiver), value(0) {}

void Invoker::setValue(int value) { this->value = value; }

void Invoker::pressAdditionButton() {
    AdditionCommand* additionCommand = new AdditionCommand(receiver);
    additionCommand->setValue(value);
    additionCommand->execute();
    commands.push(additionCommand);
}

void Invoker::pressMultiplicationButton() {
    MultiplicationCommand* multiplicationCommand =
        new MultiplicationCommand(receiver);
    multiplicationCommand->setValue(value);
    multiplicationCommand->execute();
    commands.push(multiplicationCommand);
}

void Invoker::pressUndoButton() {
    if (!commands.empty()) {
        UndoableCommand* command = commands.top();
        command->unExecute();
        commands.pop();
        delete command;
    }
}

void Invoker::displayValue() {
    std::cout << receiver->getCurrentValue() << "\n";
}
