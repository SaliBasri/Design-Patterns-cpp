#include "IceCream.hpp"

class VanillaIceCream : public IceCream {
    std::string getDescription() override;
    double cost() override;
};