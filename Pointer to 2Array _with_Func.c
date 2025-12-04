#include <stdio.h>

int sum(int *p) {
    return p[0] + p[2];
}

int main() {
    int arr[3][3] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    int (*ptr)[3] = arr + 1;

    printf("%d", sum(*ptr));
    return 0;
}
