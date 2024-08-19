#include<iostream>
using namespace std;

// multi level inheritance -- parent , child , grandchild 
class EV{
	//protected:
	public:
		EV(int a,int b);
		{
			a=s;
			b=w;
		}
	
	void speed(){
		cout<<"Enter speed :";
		cin>>s;
		cout<<"Enter no of wheel :"; cin>>w;
		cout<<"The speed  is "<<s<<endl;
		cout<<"The wheels are "<<w<<endl<<endl;	
		
	}
	
};


class fuel : private type{
	public: 
	fuel(string g);{
		g=f;
	}
	void f1()
	{
		cout<<"Enter fuel :"; cin>>f;
		cout<<"The fuel type is "<<f<<endl<<endl;
	}
	
};
class hybrid : public EV,public fuel
{
public:
	hybrid(int a, int b, string g):EV(a,b),fuel(g){
	}
};

int main(){
hybrid	ola(3000,200 ,petrol);
ola.f1();
ola.speed();

	return 0;
	
}
