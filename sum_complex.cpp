#include<iostream>
#include<cmath>
using namespace std;
int a,b,c,d;
class complex 
{
	public:
	void setvalue()
	{
	 cout<<"enter two value "<<endl;
	 cin>>a;
	 cin>>b;
	 //cout<<"the complex:"<<a<<"+"<<b<<"i"<<endl;
	 cout<<"enter two value "<<endl;
	 cin>>c;
	 cin>>d;
	 //cout<<"the complex:"<<c<<"+"<<d<<"i"<<endl;
	}
	
	void add()
	{
	    int real=a+c;
	    int img=b+d;
	    cout<<real<<"+"<<img<<"i"<<endl;
	}

};
int main(){
 complex p;
 p.setvalue();
 p.add();
 return 0;
}
