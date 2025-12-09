// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;

//similar to struct 
 class stud{
     public : //access specifier 
     int roll;
     string name;
     void dis(){
          cout<<"roll :"<<roll<<endl;//v,roll  was not declared in this scope;
          }
          
       stud(string a,int r);
       ~stud();

     void newdis();//func declared 
   
 };
 //constructor outside the class
 stud::stud(string a,int r)
     {
        name =a;
        roll=r;
 cout<<"constructoor:"<<endl;
     }
 
 //destructor outside the classs
 stud:: ~stud()
     
     {  cout<<"roll :"<<roll<<endl;
        cout<<"destructor:"<<endl;
     }
     
 
 
 //defining outside the class
 
  void stud::newdis(){//:: scope resolution operator 
          cout<<"roll :"<<roll<<endl;//v,roll  was not declared in this scope;
          }
int main() {
    // Write C++ code here
    stud constructor("dishh",41); //constructor
    cout<<constructor.name<<endl<<constructor.roll<<endl;
    
    stud copy=constructor;//copy constructor 
    cout<<copy.name<<endl<<copy.roll<<endl;
    //desturctor has no memory cout<<"size of class "<<endl<<sizeof(~stud)<<endl;
    cout<<"size of object "<<endl<<sizeof(constructor)<<endl;
    

    
    
   // stud dish;//object stores 
   // stud vanthini;
  //  vanthini.roll=5;
   // dish.roll=2;
   
  // dis(); //error: 'dis' was not declared in this scope; did you mean
   // vanthini.dis();
    //  vanthini.newdis();

    
    
    return 0;
}
