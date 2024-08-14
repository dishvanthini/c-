#include<iostream>
#include<cmath>// c prefix insted of .h 
using namespace std;

class point{
	public:
		int x,y;
		
		point(int l,int m )
		{
			x=l;
			y=m;
			
		}
		void display(){
			cout<<"l: "<<x<<endl<<"m :"<<y<<endl;
			
			
		}
		float distance(point p,point q){
			
			float d=sqrt(pow((p.x-q.x),2)+pow((p.y-q.y),2)); //math header file 
			cout<<endl<<"distance : "<<d<<'\n';
			return d;
		}
};

int main(){
	point p(2,3);
	p.display();
	
	
	point q(4,5);
	q.display();
	
	p.distance( p, q);
	
	q.distance(p,q);
	//int d=sqrt(pow((p.x-q.x),2)+pow((p.x+p.y),2));
	
	
	
	
	
	return 0 ;
}
//constructor
