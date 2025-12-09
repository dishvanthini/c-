#include <iostream>
using namespace std;

class Empty {
    
};

class Test {
    Empty e;   // empty MEMBER (not base)  e  is an  real  addr  , so its memory cant reomve ;
    Test d;///infinite size bcz its own class has its type ..its wrong so make it comment will execute 
    int x;
};
class new2{
  Test e;  
};

int main() {
    cout << sizeof(Test)<<endl;
        cout << sizeof(new2);

}
