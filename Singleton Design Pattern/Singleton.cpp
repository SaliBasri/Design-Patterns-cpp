#include <iostream>
#include <mutex>
using namespace std;

class Singleton {
   private:
    string name, surname;
    static Singleton* instance;
    static mutex m;  // Mutex for thread safety
    Singleton() {}

   public:
    Singleton(Singleton& obj) = delete;  // Delete the copy constructor
    ~Singleton() {}; 

    static Singleton* getInstance() {
        lock_guard<mutex> lock(m);    
        if (instance == nullptr) {
            instance = new Singleton();
        }
        return instance;
    }

    void setValues(string name, string surname) {
        lock_guard<mutex> lock(m);
        this->name = name;
        this->surname = surname;
    }

    void print() {
        cout << "Name: " << name << endl;
        cout << "Surname: " << surname << endl;
    }
};

Singleton* Singleton::instance = nullptr;
mutex Singleton::m;

int main() {
    Singleton* s1 = Singleton::getInstance();
    s1->setValues("John", "Doe");
    s1->print();

    Singleton* s2 = Singleton::getInstance();
    s2->setValues("Sali", "Basri");
    s1->print();
    s2->print();

    //Singleton s3;  // Error: Singleton::Singleton(Singleton&) is private

    return 0;
}

