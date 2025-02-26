#include <iostream>

#include "Observer.hpp"

class ConcreteObserver : public Observer {
   public:
    /**
     * This constructor is not used in this case to avoid circular dependency
     * although in many cases having this constructor might be helpful.
     * subject_ parameter below might not be necessary (e.g when 1 observer can
     * observe multiple subjects)
     *
     * Using this logic if necessary we can also modify the example abstarct
     * class to define a subject parameter
     */
    //* ConcreteObserver(AbstractSubject* subject) : subject_(subject) {
    //*     subject->attach(this);
    //* }
    //* ConcreteObserver() {}

    void notify() override;
};

void ConcreteObserver::notify() {
    std::cout << "ConcreteObserver notified" << std::endl;
}