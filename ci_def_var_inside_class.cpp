#include<iostream>
#include<cmath>
using namespace std;

class interest{	
	public:	
	float x,y,z,ci;	
	
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
	/*void change_attributes(){
		x=5000;
		y=8;
		z=15;
	cout<<"principle value "<<x<<endl<<"years "<<y<<endl<<"rate "<<z<<endl;
	}	
	*/
	
	void user_input(){
		
	
	cout<<"enter P T R values"<<endl;
	cin>>x>>y>>z;
	cout<<"principle value "<<x<<endl<<"years "<<y<<endl<<"rate "<<z<<ci<<endl;

	}
};



int main(){
	
	//interest x(1000,2.0,15.0);
	//x.calculate();
	
	float x1,y1,z1;
	
	//cout<<"enter P T R values"<<endl;
	//cin>>x1>>y1>>z1;
	interest x(x1,y1,z1);
	x.user_input();
	x.calculate();
	
	
	interest y(x1,y1,z1);
	y.user_input();
	y.calculate();
	
//	x.change_attributes();
	


	return 0;
	
	
}// assignment - do using two different formula - two different func
// some time rate of interest is percentage 
