#include<iostream>
using namespace std;

class pupil{
	
	public:
		int i;
	void id(){
		cout<<"enter id."<<endl;
		cin>>i;
	}
	void print_id(){
		cout<<"the id"<<i<<endl;	
	}


};
class academic: virtual public pupil{
	
	protected:
	int m;
	
	public:
	print_id();
	void mark(){
		
		cout<<"enter total mark academic."<<endl;
		cin>>m;
	}
	void print_mark(){ 
		cout<<"the total mark in academic."<<m<<endl;
		
	}
};
class sports:virtual public pupil{
	
	protected:
	int s;
	public:
	void score(){
		cout<<"enter total score sports."<<endl;
		cin>>s;
	}
	void print_score(){
		cout<<"the sports scored"<<s<<endl;
		
	}
};
 
class report : public academic,public sports
{
	
public:
	int t=m+s;
	void display_score(){
		
		print_mark();
		print_score();
		
		cout<<"the total score "<<t<<endl;
		
        
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
	d.print_id();
	d.id();
	d.mark();
	d.score();
	d.display_score();//total
	return 0;
}
//thrid hybrid contain - drived for both simple , scientific-
