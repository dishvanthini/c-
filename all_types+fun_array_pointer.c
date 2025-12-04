#include <stdio.h>

//no arguement no return
void f1(){
    int arr[]={1,2,3};
    int *a=arr;//&arr[0];
    printf("outof array garbage value %d \n",a[4]);
    printf("a[0]:%d\n",*a);//value of first index 
    printf("a addr:%p\n",a);
    for(int i=0;i<3;i++){
        printf("%d",a[i]);
    }
}
//no arguement with return 
int* func2(){
    static int arr[]={4,5,9};
    return &arr[0];//arr--0 index
}

//no return with arg
void func3(int *a){
    printf("\n\nfunc3 array\n");
   for(int i=0;i<3;i++){
        printf("a[%d]:%d ",i,*(a+i));
    }
}

//return,arguements
int func4(int*b){
    return *(b+1);
}



int main() {
    
f1(); //no arguement  no return 

////////////////////return with no arguement 
int *a;
a=func2(); 
printf("\nfunc2...a[0]:%d",*a);
printf("\nfunc2...a[2]:%d",*(a+2)); 
printf("\nfunc2...a[2]:%d",*(++a));//1+a
printf("\nfunc2...a[0]:%d\n",*a);
 for(int i=0;i<3;i++){
        printf("a[%d]:%d ",i,*(a+i));
    }
///////////////////////argument with no return 

int arr[]={1,3,6};

func3(&arr[0]);//arr

/////////////////return with arguement 

int arr1[]={9,3,6};

int a1=func4(&arr1[0]);//arr
printf("\na[1] in fun4 %d",a1);
    return 0;
}
