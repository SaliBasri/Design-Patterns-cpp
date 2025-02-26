#pragma once
#include <vector>

#include "Observer.hpp"

class Observable {
   protected:
    std::vector<Observer*> observers;

   public:
    virtual void addObserver(Observer* observer);
    virtual void removeObserver(Observer* observer) {};  // Add if necessary
    virtual void notifyObservers();
};

//* Defaut implementation of observable methods */

void Observable::addObserver(Observer* observer) {
    observers.push_back(observer);
}

void Observable::notifyObservers() {
    for (Observer* observer : observers) {
        observer->notify();
    }
}