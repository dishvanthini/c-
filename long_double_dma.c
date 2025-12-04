// Online C compiler to run C program online
#include <stdio.h>
#include <stdlib.h>

int main() {
     long double  *p=malloc(2*16);
     p[0]=2.1234567890123456789L;//15digit-double //18 value Lf
     p[1]=4.5;
     printf("%.20Lf",p[0]);
    return 0;
}
