#include <iostream>

#include "Observable.hpp"

class ConcreteSubjectDefault : public Observable {
   public:
    void doSomething();
};

void ConcreteSubjectDefault::doSomething() {
    std::cout << "Default subject did something" << std::endl;
    notifyObservers();
}