#include <unistd.h>

#include <iostream>

#include "Observable.hpp"

class ConcreteSubjectModified : public Observable {
   public:
    void doSomething();
    void notifyObservers() override;
    void addObserver(Observer* observer) override;
};

void ConcreteSubjectModified::doSomething() {
    std::cout << "Modified subject did something" << std::endl;
    notifyObservers();
}

void ConcreteSubjectModified::notifyObservers() {
    /*for (Observer* observer : observers) { // this is also correct
        observer->notify();
    }*/

    std::cout << "ConcreteSubjectModified will notify in 5 seconds"
              << std::endl;
    sleep(5);

    Observable::notifyObservers(); // calling parent class method
}

void ConcreteSubjectModified::addObserver(Observer* observer) {
    std::cout << "ConcreteSubjectModified added an observer" << std::endl;
    Observable::addObserver(observer); // calling parent class method
}