#include<iostream>
using namespace std ;
int main (){
	int a,b,sum,mult,div,mod;
	float diff;
	char s;
	cout<<"swith case calculator !\n";
	cout<<"enter a :";
	cin>>a;
	cout<<"enter b :";
	cin>>b;
	sum=a+b;
	diff=a-b;
	mult=a*b;
	div=a/b;
	mod=a%b;
	
	cout<<"enter operator  :";
	cin>>s;
	switch(s){
	case '+':
		cout<<"sum :";
		cout<<sum;
	break;
	case'-':
		cout<<"\ndiff :";
		cout<<diff;
	break;
		
	case '*':
		cout<<"\nproduct :";
		cout<<mult;
	break;
	
	case '/':
	cout<<"\ndivision :";
	cout<<div;
	break;
	
	case '%':
	cout<<"\nremainder :";
	cout<<mod;
	break;
		
	}

	return 0;
	
}

