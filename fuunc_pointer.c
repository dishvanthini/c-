#include <stdio.h>

/* -------------------------------------------
   1. No argument, No return value
   Uses array pointer inside function
   ------------------------------------------- */
void fun1() {
    static int arr1[3] = {10, 20, 30};
    int (*p1)[3] = &arr1;

    printf("fun1 (No arg, No return): %d %d %d\n",
           (*p1)[0], (*p1)[1], (*p1)[2]);
}

/* -------------------------------------------
   2. With argument, No return value
   Receives pointer to an array
   ------------------------------------------- */
void fun2(int (*p2)[3]) {
    printf("fun2 (Arg, No return): %d %d %d\n",
           (*p2)[0], (*p2)[1], (*p2)[2]);
}

/* -------------------------------------------
   3. No argument, With return value
   Returns pointer to an array
   ------------------------------------------- */
int (*fun3())[3] {
    static int arr3[3] = {100, 200, 300};
    return &arr3;
}

/* -------------------------------------------
   4. With argument, With return value
   Takes array pointer and returns array pointer
   ------------------------------------------- */
int (*fun4(int (*p4)[3]))[3] {
    (*p4)[0] += 5;
    (*p4)[1] += 5;
    (*p4)[2] += 5;

    return p4;
}

/* -------------------------------------------
   MAIN PROGRAM – Calls all 4 functions
   ------------------------------------------- */
int main() {
    fun1();                     // Type 1

    int arr_main[3] = {1, 2, 3};
    fun2(&arr_main);            // Type 2

    int (*p3)[3] = fun3();      // Type 3
    printf("fun3 (Return only): %d %d %d\n",
           (*p3)[0], (*p3)[1], (*p3)[2]);

    int (*p4)[3] = fun4(&arr_main);   // Type 4
    printf("fun4 (Arg + Return): %d %d %d\n",
           (*p4)[0], (*p4)[1], (*p4)[2]);

    return 0;
}
