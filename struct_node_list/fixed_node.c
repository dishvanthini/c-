// Online C compiler to run C program online
#include <stdio.h>
#include<stdlib.h>
//only three node !!! 

struct Node{
    int data;
    struct Node*next;
};

int main() {

struct Node* first = (struct Node*)malloc(sizeof(struct Node));
struct Node* second = (struct Node*)malloc(sizeof(struct Node));
struct Node* third = (struct Node*)malloc(sizeof(struct Node));

// Input from user
printf("Enter first node data: ");
scanf("%d", &first->data);

printf("Enter second node data: ");
scanf("%d", &second->data);

printf("Enter third node data: ");
scanf("%d", &third->data);

// Link nodes
first->next = second;
second->next = third;
third->next = NULL;

//printing 




    return 0;
}
