#pragma once

#include "UndoableCommand.hpp"
#include "Calculator.hpp"

class MultiplicationCommand : public UndoableCommand {
    private:
        Calculator* receiver;
        int value;
    public:
        MultiplicationCommand(Calculator* receiver) : receiver(receiver) {}
        void execute() override;
        void unExecute() override;
        void setValue(int value);
};