#include<stdio.h>

void printString(char *s) {
    if (*s == '\0')
        return;

    printf("%c", *s);
    printString(s + 1);
}

int fun(int n){
    if(n==3) 
   
    return 8;
   // printf("\npev %d", n); 

    fun(n-1); //   2-1 //1-1 //0-1//    
    printf(" %d ", n); 
    
     return 9;
     //fun(n-1);
}
    
void printReverse(char *s) {
    if (*s == '\0')    // base case
        return;

    printReverse(s + 1);  // go 2 end of string
    printf("%c", *s);     // print while coming back
}
int strLength(char *s) {
    if (*s == '\0')   // base case: end of string
        return 0;

    return 1 + strLength(s + 1);  // move pointer to next char
}

int main(){
    int a=fun(8);// when fun(2) < n==3 then segmentation fault 
    printf("\nRETURN VALUE %d\n",a);
    printString("yes");
    printReverse("hello");
    printf("\nLength = %d\n", strLength("hellohello"));
    return 0;
}
