#include<iostream>
using namespace std;

class pupil{
	
	public:
		int i;
	void id(){
		cout<<"Enter ID :";
		cin>>i;
	}
	void print_id(){
		cout<<endl<<"The ID :"<<i<<endl;	
	}


};
class academic: virtual public pupil{
	
	protected:
	int m;
	
	public:
	void mark(){
		
		cout<<"Enter total mark academic :";
		cin>>m;
	}
	void print_mark(){ 
		cout<<"The total mark in academic :"<<m<<endl;
		
	}
};
class sports:virtual public pupil{
	
	protected:
	int s;
	public:
	void score(){
		cout<<"Enter total score sports :";
		cin>>s;
	}
	void print_score(){
		cout<<"The sports scored :"<<s<<endl;
		
	}
};
 
class report : public academic,public sports
{
	
public:
	
	void display_score(){
	int t=m+s;
		print_mark();
		print_score();
		
		cout<<"The total score : "<<t<<endl;
		
        
	}
};


int main()
{
	/*pupil stud1;//base class
	stud1.id();
	//stud1.print_id();
	academic a;//derived 1
	a.mark();
	sports b;
	b.score();	//derived 2
	*/
	
	report d;
	
	d.id();
	d.mark();
	d.score();
	d.print_id();
	d.display_score();//total
	return 0;
}
//thrid hybrid contain - drived for both simple , scientific-
