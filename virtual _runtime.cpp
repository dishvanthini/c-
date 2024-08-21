#include<iostream>
#include<cmath> 
using namespace std;

	class parent{
		public:
			int x;
		parent()
		{
			 x=10;
		}
	virtual void display()
	{
			
	cout<<"the parent num is ="<<x<<endl;
		}
		
};

class child : public parent{
		public:
			int y;
			
		child ()
		{
			 y=20;
		}
		
	void display()
	{
		cout<<" child class the parent num is ="<<x<<endl;
	
		cout<<" child class  is ="<<y<<endl;
	
	}

};
		
int main()
{
parent* a;
child  b;
a=&b;
(*a).display();

//b.display();
	
	return 0 ;
}
//run time visible while pointer used. 


//poly -many morhy - many 
// compile time 2- function overload , operator overload  , run time ---- virtual function .   -obj or value assign to func  
 
