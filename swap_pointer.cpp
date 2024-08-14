#include<iostream>
using namespace std;
void swap(int *a ,int *b );


void swap(int *a ,int *b ){
	int temp;

	temp=*a;
    *a=*b;
    *b=temp;

}

int main(){
    int n1,n2;
    cout<<"before swapping :"<<endl;
    cout<<"the value of A:"<<n1<<" the value of B:"<<n2<<endl;

    swap(&n1,&n2);
    cout<<"after swapping :"<<endl;
    cout<<"the value of A:"<<n1<<" the value of B :"<<n2<<endl;
    return 0;

}
