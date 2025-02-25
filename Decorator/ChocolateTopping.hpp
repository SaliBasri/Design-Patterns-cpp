#include "IceCreamDecorator.hpp"

class ChocolateTopping : public IceCreamDecorator {
   public:
    ChocolateTopping(IceCream* iceCream) : IceCreamDecorator(iceCream) {}
    double cost() override;
    std::string getDescription() override;
};

std::string ChocolateTopping::getDescription() {
    return iceCream->getDescription() + " + Chocolate Topping";
}

double ChocolateTopping::cost() {
    return iceCream->cost() + 0.25;
}