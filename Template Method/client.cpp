#include <iostream>
#include "ConcreteClass1.cpp"
#include "ConcreteClass2.cpp"
#include "AbstractClass.h"

using namespace std;

void clientCode(AbstractClass *class_) {
    // ...
    class_->TemplateMethod();
    // ...
  }

int main() {
    cout << "Same client code can work with different subclasses:\n";
    ConcreteClass1 *concreteClass1 = new ConcreteClass1();
    clientCode(concreteClass1);
    delete concreteClass1;
    cout << endl;

    cout << "Same client code can work with different subclasses:\n";
    ConcreteClass2 *concreteClass2 = new ConcreteClass2();
    clientCode(concreteClass2);
    delete concreteClass2;
    cout << endl;

    return 0;
}