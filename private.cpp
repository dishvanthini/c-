#include<iostream>
using namespace std;
//inheritance ...
class Evehicle{//base class
//	private :
			//int range ;
		
	public: 
	int maxspeed,range ,battery;
		
		
		void inputEv(int a,int b,int c){
			range=a;
			maxspeed=b;
			battery=c;
			
		}
		void displayev(){
			cout<<"RANGE :"<<range<<endl;//can declare in its own class
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
			range=a;//private class cant access in derived class
			maxspeed=b;
			battery=c;
			displayev();
			
		}
	
		
};
int main(){
	
	// base class///same object cant declare for same class
	Evehicle v;
	v.inputEv(1000,200,20);
	v.displayev();
	
	
	//derived class
	two_wheeler p;
	p.input();
	p.display();
	p.setEv(100,200,24);//inputEv
	//p.range; private cant access in main function
	
	
	return 0;
}//private -cant access the member of base class using object of derived classs.//only within the class of derived 
