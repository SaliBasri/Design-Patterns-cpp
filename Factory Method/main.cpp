#include "Circle.hpp"
#include "CircleFactory.hpp"
#include "Square.hpp"
#include "SquareFactory.hpp"

class Client {
   private:
    AbstractFactory* factory;
    AbstractShape* shape;

   public:
    Client(AbstractFactory* factory) {
        this->factory = factory;
        shape = factory->createShape();
    }

    void drawShape() { shape->draw(); }
};

/**
 * This is driver code.
 * Because of the factory method pattern, the client code does not need to know
 * the concrete classes of the objects it is creating. We can add shapes without
 * modifying the client code.
 */
int main() {
    AbstractFactory* circleFactory = new CircleFactory();
    AbstractFactory* squareFactory = new SquareFactory();

    Client* client1 = new Client(circleFactory);
    Client* client2 = new Client(squareFactory);

    client1->drawShape();
    client2->drawShape();

    delete client1;
    delete client2;
    delete circleFactory;
    delete squareFactory;

    return 0;
}