#include <stdio.h>

int f1(int x) { return x + 1; }
int f2(int x) { return x * 2; }
int f3(int x) { return x - 3; }

int main() {
    int (*fp[3])(int) = {f1, f2, f3};
    int a = 5;

    int result = fp[1]( fp[0]( fp[2](a) ) );

    printf("%d", result);
    return 0;
}
