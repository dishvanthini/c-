#include <iostream>
using namespace std;

class A {
public:
    virtual void getValue(int x) {
        //Virtual function → runtime binding 
        //return x;
        cout<<"the A "<<x;
    }
};

class B : public A {
public:
     void getValue(int x=10) override {//take default value when no agrue is passed !!
        //Default argument → compile-time binding 
        cout<<"the b "<<x;
    }
};

int main() {
    A* obj;

    B b;
    obj = &b;

obj->getValue(5); // 10
//obj->getValue(); // 10
}
