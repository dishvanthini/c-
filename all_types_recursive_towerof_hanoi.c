#include <stdio.h>

int sumd(int n) {
    if(n == 0)
        return 0;
    return (n % 10) + sumd(n / 10);
}

int sum(int n){
    if(n == 0) return 0;
    return n + sum(n - 1);
}

int revf(int n, int rev){
    if(n == 0) return rev;
    return revf(n / 10, rev * 10 + n % 10);
}

void towerofhanoi(int n, char from, char to, char aux){
    if(n == 1){
        printf("\nMove disk 1 from %c to %c", from, to);
        return;
    }
    towerofhanoi(n-1, from, aux, to);
    printf("\nMove disk %d from %c to %c", n, from, to);
    towerofhanoi(n-1, aux, to, from);
}

int main() {
    int a = sumd(85);
    printf("digit: %d", a);

    printf("\nsum: %d", sum(3));

    printf("\nrev: %d", revf(123, 0));

    towerofhanoi(3, 'A', 'C', 'B');
    return 0;
}
