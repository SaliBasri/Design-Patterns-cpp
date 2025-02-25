#include "AbstractClass.h"

class ConcreteClass1 : public AbstractClass {
   protected:
    void RequiredOperation1() const override {
        std::cout << "ConcreteClass1 says: Implemented Operation1\n";
    }
    void RequiredOperation2() const override {
        std::cout << "ConcreteClass1 says: Implemented Operation2\n";
    }
};