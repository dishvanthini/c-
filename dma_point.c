#include <stdio.h>
#include <stdlib.h>

int main() {
   // void *p = calloc(3 * 4,4);  // allocate memory for 3 integers
   void *p = malloc(3 * 4);  // allocate memory for 3 integers

    ((int*)p)[0]=1;
    ((int*)p)[1]=2;
   ((int*)p)[2]=3;
    printf("old 2nd index:%d\n",((int*)p)[2]);
     printf("new 2nd:");
   scanf("%d",&((int*)p)[2]);    
    
    printf("new one :%d\n",((int*)p)[2]);
    ((int*)p)[56]=4;//out of bounds but still its printing 
    printf("Size of pointer p: %d bytes\n", sizeof(p));
    printf("Size of pointer p: %d bytes\n", sizeof(*p));

   printf("Allocated memory size: %lu bytes\n", 3 * sizeof(int));
   printf("56th :%d",((int*)p)[56]);
    printf("\nall the value of p \n");
    for (int i=0;i<3;i++){
        printf("%d\n",((int*)p)[i]);
    }

    free(p);
    return 0;
}
