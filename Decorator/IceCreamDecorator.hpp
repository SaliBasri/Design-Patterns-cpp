#pragma once
#include "IceCream.hpp"

class IceCreamDecorator : public IceCream {
   protected:
    IceCream* iceCream;

   public:
    IceCreamDecorator(IceCream* iceCream) : iceCream(iceCream) {}
    virtual double cost() = 0;
    virtual std::string getDescription() = 0;
};