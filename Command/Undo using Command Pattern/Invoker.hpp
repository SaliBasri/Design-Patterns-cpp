#pragma once
#include <stack>

#include "AdditionCommand.hpp"
#include "MultiplicationCommand.hpp"

class Invoker {
   private:
    std::stack<UndoableCommand*> commands;
    Calculator* receiver;
    int value;

   public:
    Invoker(Calculator* receiver);
    void setValue(int value);
    void pressAdditionButton();
    void pressMultiplicationButton();
    void displayValue();
    void pressUndoButton();

};