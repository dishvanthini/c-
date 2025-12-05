#include <stdio.h>

int main() {
    int a[3] = {10, 20, 30};
    int *p = a;
    int (*q)[3] = &a;

    p[1] = (**q);

    printf("%d", a[1]);
    return 0;
}
