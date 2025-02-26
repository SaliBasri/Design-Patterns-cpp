#include "Invoker.hpp"

int main() { //This is client code
    Invoker invoker = Invoker(new Calculator());

    invoker.displayValue();

    invoker.setValue(5);
    invoker.pressAdditionButton();
    invoker.displayValue();

    invoker.setValue(10);
    invoker.pressMultiplicationButton();
    invoker.displayValue();
    invoker.pressAdditionButton();
    invoker.displayValue();

    invoker.pressUndoButton();
    invoker.displayValue();
    invoker.pressUndoButton();
    invoker.displayValue();

    return 0;
}