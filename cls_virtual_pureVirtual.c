#include <iostream>
using namespace std;

// Base class with both virtual and pure virtual functions
class Vehicle {
public:
  virtual void start() {   // normal virtual function
        cout << "Vehicle starts in generic way\n";
    }

    virtual void stop() = 0; // pure virtual function → must be implemented in derived
};

// Derived class Car
class Car : public Vehicle {
public:
    void start()  {  // overriding normal virtual
        cout << "Car starts with ignition key\n";
    }

    void stop() override {   // implementing pure virtual
        cout << "Car stops using brake\n";
    }
};

// Derived class Bike
class Bike : public Vehicle {
public:
    void start()  {  // overriding normal virtual
        cout << "Bike starts with kick start\n";
    }
 void stop() override {   // implementing pure virtual
        cout << "Bike stops using hand brake\n";
    }
   
};

int main() {
    // Base class pointers
    Vehicle* v1 = new Car();
    Vehicle* v2 = new Bike();

    // Polymorphic calls
    v1->start();  // calls Car::start
    v1->stop();   // calls Car::stop

    v2->start();  // calls Bike::start
    v2->stop();   // calls Bike::stop

    delete v1;    // calls destructor automatically
    delete v2;    // calls destructor automatically

    return 0;
}
