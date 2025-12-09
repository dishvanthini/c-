// queue ; 
#include <stdio.h>
#define MAX 4
int rear=-1,front=-1;//head is front ,top is readr 
int q[MAX];

void dequeue(){
    if (rear==-1){
        printf("its empty ");
    }
    else{
    front++;
        printf("the %d removed\n",q[front]);
      
    }
}
void enqueue(int x){
    //last element add
    //check queue full or not 
    if(rear==MAX-1){
        printf("its full\n");
    }
    else{
        rear++;//top//0
        q[rear]=x;
        printf("the add element %d\n",x);
        
    }
} 
void display(){
    if (rear==front){
        printf("its empty ");
    }
    for(int i=front+1;i<MAX;i++){
        printf("%d ",q[i]);
    }
}

int main() {
enqueue(10);
enqueue(20);
enqueue(30);
dequeue();dequeue();

enqueue(40);
enqueue(10);
enqueue(20);
enqueue(30);

    display();

    return 0;
}
