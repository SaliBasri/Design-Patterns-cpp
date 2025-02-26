#include "MultiplicationCommand.hpp"

void MultiplicationCommand::execute() { receiver->performMultiplication(value); }

void MultiplicationCommand::unExecute() { receiver->performDivision(value); }

void MultiplicationCommand::setValue(int value) { this->value = value; }