#include "AbstractFactory.hpp"
#include "Square.hpp"

class SquareFactory : public AbstractFactory {
   public:
    AbstractShape* createShape() override { return new Square(); }
};