///stack ;
#include <stdio.h>
#define MAX 4
int top=-1;
int stack[MAX];

void push(int x){
    //check stack full or not 
    if(top==MAX-1){
        printf("its full\n");
    }
    else{
        top++;//top=top+1;//0
        stack[top]=x;
        printf("the %d added\n",x);
    }
}
void pop(){
    //last element remove 
    //check underflow 
    if(top==-1){
        printf("its empty\n ");
    }
    else{ 
        printf("the last element %d\n",stack[top]);
        top--;
    }
} 
void display(){
    for(int i=MAX-1;i>=0;i--){
        printf("%d ",stack[i]);
    }
}

int main() {
    push(10);
    pop();
    push(20);
    push(30);
    pop();
    display();

    return 0;
}
