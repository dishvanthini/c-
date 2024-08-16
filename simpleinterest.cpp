#include<iostream>
using namespace std;

class interest{
	
	public:
		
	float x,y,z;	
	
	interest(float  p, float t, float r)
	{
		x=p;
		y=t;			
		z=r;
		
	}
	
	float  calculate(interest x){
		float si=(((x.x)*(x.y)*(x.z))/100);
		cout<<endl<<"simple interest  : "<<si<<'\n'; //x.x=1000,x.y=2
		return si;
		
	}
	
};


int main(){
	
	interest x(1000,2,15);
	x.calculate(x);
	
	interest y(2000,2,15);
	y.calculate(y);
	
	return 0;
	
	
}
