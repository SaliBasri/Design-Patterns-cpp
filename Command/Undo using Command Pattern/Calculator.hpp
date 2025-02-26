#pragma once

/**
 * This is our receiver
 */
class Calculator {
   private:
    int currentValue;

   public:
    Calculator();
    void performAddition(int valye);
    void performSubtraction(int value);
    void performMultiplication(int value);
    void performDivision(int value);
    int getCurrentValue();
};