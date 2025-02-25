#pragma once
#include <iostream>
#include <vector>

#include "AbstractTask.hpp"

class ComplexTask : public AbstractTask {
   private:
    std::string title;
    std::vector<AbstractTask*> tasks;

   public:
    void addTask(AbstractTask* task) { tasks.push_back(task); }
    std::string getTitle() override;
    void setTitle(std::string title) override;
    void display() override;
};

std::string ComplexTask::getTitle() { return title; }

void ComplexTask::setTitle(std::string title) { this->title = title; }

void ComplexTask::display() {
    std::cout << "Complex Task: " << title << std::endl;
    for (AbstractTask* task : tasks) {
        task->display();
    }
    std::cout << "End complex group " << title << std::endl;
}