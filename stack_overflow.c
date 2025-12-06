#include <stdio.h>
int main() {
    char c;
    for (c = 'a'; c >='Z'; c++)//a=97 A=90 ; 97<90 //false; //97>90
        printf("%c ", c);
    return 0;
}
