#include<iostream>
using namespace std;
//inheritance ...
class Evehicle{ //base class

	protected :		
		int range ;
	public: 
		int maxspeed,battery;
		
		
		void inputEv(int a,int b,int c){
			range=a;
			maxspeed=b;
			battery=c;
			
		}
		void displayev(){
			cout<<"RANGE :"<<range<<endl;//protected can access in its own class 
			cout<<"maxspeed :"<<maxspeed<<endl;
			cout<<"BATTERY :"<<battery<<endl;
		}
		
		
};
class two_wheeler:private Evehicle{//derived class //all memeber can be accesed base class
	public:
		string s;
		
		void input(){
			cout<<"Enter bike or scooter :";
			cin>>s;
		}
		void display(){
			cout<<endl<<"It is an "<<s<<endl;
		}
		void setEv(int a,int b,int c){
			range=a;// protected , can used in derived class 
			maxspeed=b;
			battery=c;
			displayev();
			
		}
	
		
};
int main(){
	
	
	Evehicle v;
	v.inputEv(1000,200,20);
	v.displayev();
	//two_wheeler v;// base class///same object cant declare for same class
	
	//derived class
	two_wheeler p;
	p.input();
	p.display();
	p.setEv(100,200,24);//inputEv
	return 0;
	//p.range;  protected class- cant access in main function 
	
}


//private -cant access the member of base class using object of derived classs.//only within the class of derived 

//private-can't access-  base class , derived class , main function  --only access its own class

//protected  cant acces in main function alone ---but can access in derived function and base function
	
