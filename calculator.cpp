#include<iostream>
using namespace std ;
int main (){
	int a,b,sum,mult,div,mod;
	float diff;
	cout<<"enter a :";
	cin>>a;
	cout<<"enter b :";
	cin>>b;
	sum=a+b;
	diff=a-b;
	mult=a*b;
	div=a/b;
	mod=a%b;
	cout<<"sum :";
	cout<<sum;
	cout<<"\ndiff :";
	cout<<diff;
	cout<<"\nproduct :";
	cout<<mult;
	cout<<"\ndivision :";
	cout<<div;
	cout<<"\nremainder :";
	cout<<mod;
	return 0;
}
