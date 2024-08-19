#include<iostream>
#include<cmath>
using namespace std;

class simple{
	
	public:
		
	int a,b;

	simple(int x ,int y){
		a=x;
		b=y;
	}
	
	void display1(){
		cout<<"simple...."<<endl<<endl;
		cout<<"sum :"<<a+b<<endl<<endl;
		cout<<"diff :"<<a-b<<endl<<endl;
		cout<<"product :"<<a*b<<endl<<endl;
		cout<<"division :"<<a/b<<endl<<endl;
		cout<<"remainder :"<<a%b<<endl<<endl;
	}
	
};
class sci{
	public:
		int d,c;
	sci(int e,int f)
	{
	 c=e;
	 d=f;
	}
	void display2()
	{
		cout<<"scientific ..."<<endl<<endl;
		cout<<"pow :"<<pow(c,2)<<endl<<endl;
		cout<<"X^Y :"<<pow(c,d)<<endl<<endl;
		cout<<"square root  of a :"<<sqrt(c)<<endl<<endl;
		cout<<"remainder :"<<c%d<<endl<<endl;
	}	
};

class hybrid : public simple,public sci
{
public:
	hybrid(int x, int y, int e, int f):simple(x,y),sci(e,f){
	}
};


int main()
{
	/*simple obj;
	obj.base1(2,3);
	obj.display();

	sci obj1;
	obj1.base2(4,5);
	obj1.display();
	*/
	
	
hybrid	d(3,4,5,6);
d.display1();
d.display2();
	

	return 0;
}
//thrid hybrid contain - drived for both simple , scientific
