#pragma once
#include <string>

class AbstractTask {
   public:
    virtual std::string getTitle() = 0;
    virtual void setTitle(std::string title) = 0;
    virtual void display() = 0;
};