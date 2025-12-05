#include <stdio.h>

int main() {
    int arr[2][3][2] = {
        { {1, 2}, {3, 4}, {5, 6} },
        { {7, 8}, {9, 10}, {11, 12} }
    };
    // Point-> to 2D array of size [3][2]
    int (*ptr)[3][2] = arr;

    //using pointer arithmetic
    printf("Values at arr[1][1][i]: ");

    for (int i = 0; i < 2; i++) {
        printf("%d ", *(*(*(ptr +1) + 2) + i));//
    }

    return 0;
}
