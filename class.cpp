#include<iostream>		//inputout stream headerfile.
using namespace std ;	// to use cin and cout function .
						// class comes under private category 
	
	class ece
	{
		public:	// to get access 
		
		char sec='a';
		float cgpa_5;
		float cgpa_6;		// attributes 
		
		float avg_3 (){			// function 
		float x=(cgpa_5+cgpa_6)/2;
			return x;
		}
	};
	
int main (){
	//creating object name 
	ece dish;//calling class // dish is member of class
	ece a;
		
		dish.cgpa_6	=7.5;
		a.cgpa_6=9.8; 
		cout<<dish.cgpa_6<<'\n';
		cout<<a.cgpa_6<<endl;						//insertion operator
		
	
	return 0 ;	
}
	


