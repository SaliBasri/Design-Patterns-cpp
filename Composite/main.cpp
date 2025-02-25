#include "ComplexTask.hpp"
#include "SimpleTask.hpp"

int main() {
    ComplexTask* allTasks = new ComplexTask();
    allTasks->setTitle("All tasks");

    SimpleTask* simpleTask1 = new SimpleTask();
    simpleTask1->setTitle("Simple Task 1");

    SimpleTask* simpleTask2 = new SimpleTask();
    simpleTask2->setTitle("Simple Task 2");

    allTasks->addTask(simpleTask1);
    allTasks->addTask(simpleTask2);

    ComplexTask* complexTask = new ComplexTask();
    complexTask->setTitle("Complex Task Group");

    SimpleTask* simpleTask3 = new SimpleTask();
    simpleTask3->setTitle("Simple Task 3");

    SimpleTask* simpleTask4 = new SimpleTask();
    simpleTask4->setTitle("Simple Task 4");

    complexTask->addTask(simpleTask3);
    complexTask->addTask(simpleTask4);
    allTasks->addTask(complexTask);

    SimpleTask* simpleTask5 = new SimpleTask();
    simpleTask5->setTitle("Simple Task 5");
    allTasks->addTask(simpleTask5);

    allTasks->display();
    return 0;
}