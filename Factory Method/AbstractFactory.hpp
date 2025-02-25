#pragma once
#include "AbstractShape.hpp"

class AbstractFactory {
   public:
    virtual AbstractShape* createShape() = 0;
    virtual ~AbstractFactory() {}
};