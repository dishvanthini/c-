#include<iostream>
#include<cmath>
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
	~interest()
	{
		x;
		y;			
		z;
		cout<<"the no of bytes occupied: "<<sizeof(x)<<" byte"<<endl;
	
	}	
	
	void calculate(){
		
		float i=pow((1+(z/100)),y);
		float ci=((x*i)-x);
		cout<<endl<<"compund interest  : "<<ci<<'\n'; //x.x=1000,x.y=2
	}
};


int main(){
	
	//interest x(1000,2.0,15.0);
	//x.calculate();
	
	float x1,y1,z1;
	cout<<"enter P T R values"<<endl;
	cin>>x1>>y1>>z1;
	interest x(x1,y1,z1);
	x.calculate();
	cout<<"the no of bytes occupied: "<<sizeof(x)<<" byte"<<endl;
	


	


	return 0;
	
	
}// assignment - do using two different formula - two different func
// some time rate of interest is percentage 
