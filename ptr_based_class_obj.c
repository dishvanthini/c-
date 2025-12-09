// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

class Base {
public:
    virtual void show() { cout << "Base function\n"; }
};

class Derived : public Base {
public:
    void show() override { cout << "Derived function\n"; }
};

int main() {
   Derived d;       // Stack-allocated Derived object
  // Base* ptr = &d;  // Base pointer points to Derived object
    //Base* ptr = Derived();//error cant convert derived to base 
    Base*ptr=new Derived();
    ptr->show();     // Calls Derived::show() because of virtual → late binding
}
