#pragma once
#include <iostream>

#include "AbstractTask.hpp"

class SimpleTask : public AbstractTask {
   private:
    std::string title;

   public:
    std::string getTitle() override;
    void setTitle(std::string title) override;
    void display() override;
};

std::string SimpleTask::getTitle() { return title; }

void SimpleTask::setTitle(std::string title) { this->title = title; }

void SimpleTask::display() {
    std::cout << "Simple Task: " << title << std::endl;
}