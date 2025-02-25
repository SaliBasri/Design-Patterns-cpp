#pragma once
#include <string>

class IceCream {  // This is the component interface
   public:
    virtual double cost() = 0;
    virtual std::string getDescription() = 0;
};