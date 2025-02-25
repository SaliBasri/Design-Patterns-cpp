#pragma once

class AbstractShape {
   public:
    virtual void draw() = 0;
    virtual ~AbstractShape() {}
};
