#include <stdio.h>

int main() {
    int i = 0;

gr://label with ":" can be given ,even its not navigate by the goto ,no erro 
    printf("%d ", i);
    i++;  
    if (i < 5)
        goto f; // jumps f if only declare else label 'f' used but not defined
     
 
    return 0;
}
