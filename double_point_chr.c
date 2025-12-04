#include <stdio.h>

int main() {

    char *a[] = {"one", "two", "three"};

    char **p = a + 1;  

    printf("%s\n", *(p -1));  

    return 0;
}
