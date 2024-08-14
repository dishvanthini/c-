#include<iostream>
using namespace std;

class complex{
	
	public:
		int a,b;
		complex(int x,int y )//complex()-no parameter
		{
			a=x;//a=10
			
			b=y;//b=20//it is an default value
			
		}
		void printno()
		{
			cout<<"no is : "<<a<<"+"<<b<<"i"<<endl;
		}
		
};
int main(){
	complex x(10,15);//two argument
	x.printno();
	complex y(11,15);
	y.printno();
	
}
//const method 
