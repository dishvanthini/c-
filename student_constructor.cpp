#include<iostream>
using namespace std;

class ECE
{
        public:
        int USN;
        char section='B';
		string name;
        float cgpa_1,cgpa_2,cgpa_3,cgpa_4,cgpa_5,cgpa_6;

        ECE(string x,float a ,float b,float c,float d,float e,float f){
        	name=x;
            cgpa_1=a;
            cgpa_2=b;
            cgpa_3=c;
            cgpa_4=d;
            cgpa_5=e;
            cgpa_6=f;

        }

        float avg_1st(){
        float x=((cgpa_1+cgpa_2)/2);
        return x;
        }
        float avg_2nd(){
        float y=((cgpa_3+cgpa_4)/2);
        return y;
        }
        float avg_3rd(){
        float z=((cgpa_5+cgpa_6)/2);
        return z;
        }

        double sgpa()
        {
            double t=(avg_1st()+avg_2nd()+avg_3rd())/3;
            return t;
        }

        void display(){

            cout<<"avg 1st "<<avg_1st()<<endl;
            cout<<"avg 2nd "<<avg_2nd()<<endl;
            cout<<"avg 3rd "<<avg_3rd()<<endl;
            cout<<"SGPA:"<<sgpa()<<endl<<endl;
            cout<<name<<endl;
    
        }
};

int main()
{
    // dish is an object 
 // ECE dish;`
    
    ECE d("dish",8.7,7.7,7.8,8.0,9.0,9.6);
  
    d.display();
    ECE a("d",8.7,7.7,7.8,8.0,9.0,9.6);
  
    a.display();
    return 0;

}
