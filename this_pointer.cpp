#include<iostream>

using namespace std;
class product{
public:
    int id;

    product  getdata(int id) /// ????
    {
    	(*this).id=id;
		return *this; //id=id;// ==0
    }
    void display(){
    	cout<<"the id :"<<id;
	}
    
};

int main()   
{
product obj;
obj.getdata(20);
obj.display();	
return 0;	
}




//expilict working..


// pointer---pointing memeory addr of  obj which is an method ..
//dereference -- return obj 
//b is datatype of obj .
