#include<iostream>
using namespace std ;
int main (){
	int a,b,sum,mult,div,mod;
	float diff;
	char s;
	cout<<"enter a :";
	cin>>a;
	cout<<"enter b :";
	cin>>b;
	
	cout<<"enter operator :";
	cin>>s;
	
	sum=a+b;
	diff=a-b;
	mult=a*b;
	div=a/b;
	mod=a%b;
	if (s=='+'){
		cout<<"sum :";
		cout<<sum;
	}
	else if (s=='-'){
		cout<<"\ndiff :";
		cout<<diff;
	}
		
	else if  (s=='*'){
		cout<<"\nproduct :";
		cout<<mult;
		}
	
	else if  (s=='/'){
	cout<<"\ndivision :";
		cout<<div;
		}
	else if  (s=='%'){
	cout<<"\nremainder :";
		cout<<mod;
		}
	else {
		cout<<"Invalid !";
	}
	return 0;
	
}

