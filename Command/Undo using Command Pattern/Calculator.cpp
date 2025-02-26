#include "Calculator.hpp"

Calculator::Calculator() : currentValue(0) {}
void Calculator::performAddition(int value) { currentValue += value; }
void Calculator::performSubtraction(int value) { currentValue -= value; }
void Calculator::performMultiplication(int value) { currentValue *= value; }
void Calculator::performDivision(int value) { currentValue /= value; }
int Calculator::getCurrentValue() { return currentValue; }