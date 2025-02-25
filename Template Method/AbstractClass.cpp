#include "AbstractClass.h"

void AbstractClass::BaseOperation1() const {
    std::cout << "AbstractClass says: I am doing the bulk of the work\n";
}
void AbstractClass::BaseOperation2() const {
    std::cout << "AbstractClass says: But I let subclasses override some "
                 "operations\n";
}
void AbstractClass::BaseOperation3() const {
    std::cout << "AbstractClass says: But I am doing the bulk of the work "
                 "anyway\n";
}
