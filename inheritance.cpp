#include<iostream>
using namespace std;
//inheritance ...
class Evehicle{//base class
	public: 
	
		void inputEv(int maxspeed,int range,int battery){
			
			cout<<"RANGE :"<<range<<endl;
			cout<<"maxspeed :"<<maxspeed<<endl;
			cout<<"BATTERY :"<<battery<<endl;
		}
		
};
class two_wheeler:public Evehicle{//derived class //all memeber can be accesed base class
	public:
		string s;
		
		void input(){
			cout<<"Enter bike or scooter :";
			cin>>s;
		}
		void display(){
			cout<<endl<<"It is an "<<s<<endl;
		}
		
};
int main(){
	
	// base class///same object cant declare for same class
	Evehicle v;
	v.inputEv(1000,200,20);
	
	
	
	//derived class
	two_wheeler p;
	p.input();
	p.display();
	p.inputEv(100,200,24);
	
	
	
	return 0;
}//private -cant access the member of base class using object of derived classs.//only within the class of derived 
