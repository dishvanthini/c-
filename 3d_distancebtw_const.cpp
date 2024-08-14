#include<iostream>
#include<cmath>// c prefix insted of .h 
using namespace std;

class point{
	public:
		int x,y,z;
		
		point(int l,int m,int n )
		{
			x=l;
			y=m;
			z=n;
			
		}
		void display(){
			cout<<"L: "<<x<<endl<<"M :"<<y<<endl<<"N"<<z<<endl;
			
			
		}
		float distance(point p,point q){
			
			float d=sqrt(pow((q.x-p.x),2)+pow((q.y-p.y),2) +pow((q.z-p.z),2)); //math header file 
			cout<<endl<<"distance : "<<d<<'\n';
			return d;
		}
};

int main(){
	point p(7,4,3);//x1,y1,z1
	p.display();


	point q(17,6,2);//x2,y2,z2
	q.display();
	
	
	p.distance( p, q);
	//point::distance( p, q);//class_name(:: -> scope )
	
	q.distance(p,q);
	//int d=sqrt(pow((p.x-q.x),2)+pow((p.x+p.y),2));
	
	
	
	
	
	return 0 ;
}
//constructor
