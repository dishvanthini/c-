#include<iostream>
#include<cmath>
using namespace std;


int add(int a,int b){//parameters in function definiton
    int c=a+b ;
    return c;
}

float add(float x,float  y ,float z){
    float  s=x+y+z;
    return s;
    }

int main(){
 cout<<"for two parameter "<<add(10,20)<<endl;//arguements in function calling
 cout<<"for three paarameters"<<add(10,20,30)<<endl;


 return 0 ;
}
