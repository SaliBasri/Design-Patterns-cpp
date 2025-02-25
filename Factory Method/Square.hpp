#pragma once
#include "AbstractShape.hpp"

class Square : public AbstractShape {
   public:
    void draw() override;
};