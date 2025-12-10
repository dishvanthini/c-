#include <stdio.h>

struct Node {
    int data;
    struct Node* next;
};

int main() {
    struct Node first, second, third;

    // Initialize nodes
    first.data = 10;
    first.next = &second;

    second.data = 20;
    second.next = &third;

    third.data = 30;
    third.next = NULL;

    // Traverse the list
    struct Node* ptr = &first;
    while (ptr != NULL) {
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");

    return 0;
}
