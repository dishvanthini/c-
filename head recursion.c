#include<stdio.h>
int fun(int n){
    if(n==3) 
   
    return 8;
   // printf("\npev %d", n); 

    fun(n-1); //   2-1 //1-1 //0-1//    
    printf(" %d ", n); 
    
     return 9;
     //fun(n-1);
}
    
int main(){
    int a=fun(2);// when fun(2) < n==3 then segmentation fault 
    printf("\nRETURN VALUE %d",a);
    return 0;
}
