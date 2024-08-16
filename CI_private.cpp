#include<iostream>
#include<cmath>
using namespace std;

class interest{	

	private :
			float x,y,z;
			
				
	public:	
	
	interest(float  p, float t, float r)
	{
		x=p;
		y=t;			
		z=r;
		 
	}	
	
	void calculate(){
		
		float i=pow((1+(z/100)),y);
		float ci=((x*i)-x);
		cout<<endl<<"compund interest  : "<<ci<<'\n'; //x.x=1000,x.y=2
	}
	
};


int main(){
	
	interest x(1000,2.0,15.0);
	x.calculate();

	
	return 0;
	
	
}// assignment - do using two different formula - two different func
// some time rate of interest is percentage 
