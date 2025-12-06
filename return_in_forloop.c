#include <stdio.h>

int main() {
    int i;
    for (i = 0; i < 5; i++) {
        printf("%d ", i);

        if (i == 3)
            return 0;   // ends main and program
    }

    printf("I will never run!");/////////////✔ The function ends immediately
}
