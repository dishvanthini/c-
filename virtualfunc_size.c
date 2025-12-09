// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
class Base {
    int a; //4
    virtual void f2() ;//8
    int d;//4
    virtual void f() {}//8  
    //24
};

class Derived : public Base {
    int b;  //4
    int c;//4 
};
int main() {
  
cout<<sizeof(Derived);

    return 0;
}
