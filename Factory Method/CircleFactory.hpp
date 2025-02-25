#include "AbstractFactory.hpp"
#include "Circle.hpp"

class CircleFactory : public AbstractFactory {
   public:
    AbstractShape* createShape() override { return new Circle(); }
};