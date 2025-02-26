#pragma once

#include "Calculator.hpp"
#include "UndoableCommand.hpp"

class AdditionCommand : public UndoableCommand {
   public:
    AdditionCommand(Calculator* receiver) : receiver(receiver) {}
    void execute() override;
    void unExecute() override;
    void setValue(int value);

   private:
    Calculator* receiver;
    int value;
};