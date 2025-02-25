#pragma once
#include <iostream>

class AbstractClass {
   public:
    void TemplateMethod() const {  // Template Method
        this->BaseOperation1();
        this->RequiredOperation1();
        this->BaseOperation2();
        this->Hook1();
        this->RequiredOperation2();
        this->BaseOperation3();
        this->Hook2();
    }

   protected:
    void BaseOperation1() const;
    void BaseOperation2() const;
    void BaseOperation3() const;

    /**
     * These operations have to be implemented in subclasses.
     * Pure virtual methods must be implemented by every concrete class.
     */
    virtual void RequiredOperation1() const = 0;
    virtual void RequiredOperation2() const = 0;

    /**
     * These are "hooks." Subclasses may override them, but it's not mandatory
     * since the hooks already have default (but empty) implementation. Hooks
     * provide additional extension points in some crucial places of the
     * algorithm.
     */
    virtual void Hook1() const {}
    virtual void Hook2() const {}
};