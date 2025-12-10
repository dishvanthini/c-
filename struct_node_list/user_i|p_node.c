#include <stdio.h>
#include <stdlib.h>
//getting from userhow many node ???/


// Step 1: Define the node structure
struct Node {
    int data;           // store value
    struct Node* next;  // pointer to next node but no node is created
};

int main() {
    int n, i, value;

    printf("How many nodes do you want? ");
    scanf("%d", &n);

    struct Node* head = NULL;  // head of the list
    struct Node* temp = NULL;  // temporary pointer for traversal
    struct Node* newNode = NULL;

    for (i = 0; i < n; i++) {
        // Step 2: Create a new node
        newNode = (struct Node*)malloc(sizeof(struct Node));

        printf("Enter data for node %d: ", i + 1);
        scanf("%d", &newNode->data);   // Step 3: Get data from user
        newNode->next = NULL;          // Step 4: Initialize next to NULL

        // Step 5: Link nodes
        if (head == NULL) {
            head = newNode;  // first node becomes head
            temp = head;     // temp points to head for linking next nodes
        } else {
            temp->next = newNode;  // link previous node to new node
            temp = newNode;        // move temp to new node
        }
    }

    // Step 6: Traverse and display the linked list
    printf("Linked list: ");
    temp = head;  // start from head
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;  // move to next node
    }
    printf("NULL\n");

    return 0;
}
