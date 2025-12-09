// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

   class Base {
public:
   virtual  void show(int x) {
        cout << "Base no param\n" << x << endl;
    }
};

class Derived : public Base {
public:
    void show(int x) {
        cout << "Derived string: " << x << endl;
    }
};

int main() {
    Derived d;

    d.show(5);  // Derived::show(string) → calls derived
    // d.show();//  error: Base::show() is hidden
    d.Base::show(10);   // Base::show() works
}
