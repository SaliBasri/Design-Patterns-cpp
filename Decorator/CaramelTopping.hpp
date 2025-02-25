#include "IceCreamDecorator.hpp"

class CaramelTopping : public IceCreamDecorator {
   public:
    CaramelTopping(IceCream* iceCream) : IceCreamDecorator(iceCream) {}
    double cost() override;
    std::string getDescription() override;
};

std::string CaramelTopping::getDescription() {
    return iceCream->getDescription() + " + Caramel Topping";
}

double CaramelTopping::cost() {
    return iceCream->cost() + 0.50;
}