#include<iostream>

using namespace std;

class product{
public:
    int *a,*b;

    void getdata(int id,int price)
    {
        a=&id;
        b=&price;
    }
    
};

int main()
{
    product *p=new product [4];
    int c,d;	
    for (int i=0;i<4;i++){
    	(*(p+i)).getdata(c,d);
    	cout<<"enter the product Id :";
        cin>>c;
        cout<<"enter price :";
        cin>>d;
        cout<<endl<<"  The product ID:"<<c<<endl;
        cout<<"  The price Rs."<<d<<endl<<endl;
        
	}
return 0;
}
