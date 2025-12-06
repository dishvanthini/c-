// Online C compiler to run C program online
#include <stdio.h>

int rec(int a[2][2][3],int i, int j, int k ){
    if(i==2){
        return 0;}
        
    int current=a[i][j][k];
    
    if (k<2){
        int new=rec(a,i,j,k+1);
        return ((current >new)?current:new);}
        
    else if (j<1){
        int new=rec(a,i,j+1,0);
        return ((current >new)?current:new);}
        
    else {
        int new=rec(a,i+1,0,0);
        return ((current >new)?current:new);}
    
}
int main() {
   int arr[2][2][3]={
    {  {1,5,3},{7,8,2} },
    {{9,6,4},{0,11,13} }
   };
   int max=rec(arr,0,0,0);
   printf("max %d",max);
   
    return 0;
}
