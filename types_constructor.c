#include <iostream>
using namespace std;

class stud {
    private :
    int priva;
public:
    int roll;
    string name;

    stud(string a = "", int r = 0,int p=0);   // ✅ default arguments

    
    friend void print_private(stud obj);
    
};

void print_private(stud obj){
     cout << "friend\n"<<obj.priva<<endl;
}
stud::stud(string a, int r,int p) {
    name = a;
    roll = r;
    priva=p;
    cout << "constructor\n";
}

int main() {
    stud a;                // acts like default constructor
    stud b("dish", 41,123322);    // acts like parameterized constructor
    stud c("only name");   // roll = 0

    cout << "a:"<<a.name << " " << a.roll << endl;
    cout << "b:"<<b.name << " " << b.roll << endl;
    cout <<"c:"<< c.name << " " << c.roll << endl;
    
    
    print_private(b);

    return 0;
}
