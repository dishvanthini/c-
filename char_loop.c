#include <stdio.h>

int main() {
    char arr[25];
    int sum = 0, total_sum = 0;

    printf("Enter 25 alphabets (A-Z or a-z):\n");
    for (int i = 0; i < 25; i++) {
        scanf(" %c", &arr[i]);

        // Convert lowercase to uppercase
        if (arr[i] >= 'a' && arr[i] <= 'z')//must convert a(67)!=A(97)
            arr[i] = arr[i] - 32;

        sum += arr[i];  // sum of given characters
    }

    // sum of A to Z
    for (char c = 'A'; c <= 'Z'; c++)
        total_sum += c;

    char missing = total_sum - sum;

    printf("Missing Letter is: %c\n", missing);

    return 0;
}
