#include <iostream>

#include "CaramelTopping.hpp"
#include "ChocolateTopping.hpp"
#include "VanillaIceCream.hpp"

int main() {
    IceCream* vanillaIceCream = new VanillaIceCream();

    std::cout << "Order: " << vanillaIceCream->getDescription()
         << " costs  " << vanillaIceCream->cost()
         << std::endl;

    IceCream* ChocolateIceCream = new ChocolateTopping(vanillaIceCream);
    IceCream* MixedIceCream = new CaramelTopping(ChocolateIceCream);

    std::cout << ChocolateIceCream->getDescription() << " costs "
              << ChocolateIceCream->cost() << std::endl;

    std::cout << MixedIceCream->getDescription() << " costs "
              << MixedIceCream->cost() << std::endl;

    delete vanillaIceCream;
    delete ChocolateIceCream;
    delete MixedIceCream;

    return 0;
}