#include <stdio.h>

int main(){
   int a = 10;
   int *b = &a;
   int **c = &b;
   printf("address of a %p \n",b);//&a
   printf("address of a %p \n",&a);
      printf("value of a %d \n",*b);
         printf("address of b %p\n ",c);    
           printf("value of b %d \n",**c);
                      printf("address of a using c  %p \n",*c);




   

   return 0;
}
