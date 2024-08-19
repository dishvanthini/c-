#include<iostream>
using namespace std;

// multi level inheritance -- parent , child , grandchild 
class EV{
	//protected:
	public:
		int s;
	
	void speed(){
		cout<<"Enter speed :";
		cin>>s;
	}
	
};
class type :private EV{
	public: 
	
	int w;
	void  wheel(){
	
		cout<<"Enter no of wheel :"; cin>>w;
	}
	void display(){
		speed();
		cout<<"The speed  is "<<s<<endl;
	}
};

class fuel : private type{
	public: 
	string f;
	void f1()
	{
		cout<<"Enter fuel :"; cin>>f;
	}
	void display(){
		wheel();
		cout<<"The wheels are "<<w<<endl<<endl;	
		f1();
		cout<<"The fuel type is "<<f<<endl<<endl;
	
		
	}
	
};

int main(){
	EV ola;
	type ola1;	
	fuel ola2;
	ola2.display();//whells , fuel type 
	
	ola1.display(); //speed 

	return 0;
	
}
