#include "ConcreteObserver.hpp"
#include "ConcreteSubjectDefault.hpp"
#include "ConcreteSubjectModified.hpp"

int main() {
    ConcreteObserver observer1;
    ConcreteObserver observer2;
    ConcreteObserver observer3;

    ConcreteSubjectDefault subject1;
    ConcreteSubjectModified subject2;

    subject1.addObserver(&observer1);
    subject1.addObserver(&observer2);
    subject1.addObserver(&observer3);

    subject2.addObserver(&observer1);
    subject2.addObserver(&observer2);

    subject1.doSomething();

    subject2.doSomething();
    subject1.doSomething();

    return 0;
}