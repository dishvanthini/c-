// C program to declare pointer to union
#include <stdio.h>

// Defining a union
union myUnion {
    int intValue;
    float floatValue;
    char charValue;
};

int main()
{
    // Creating a union variable
    union myUnion u;

    // Declaring a pointer to the union and assign it the
    // address of the union variable
    union myUnion* ptr = &u;

    // Using the pointer to Set the intValue member of the
    // union
    ptr->intValue = 100;

    // Accessing the intValue member of the union
    printf("The intValue is: %d\n", ptr->intValue);

    // set value for floatValue This will overwrite the
    // intValue
    ptr->floatValue = 3.14;

    // Accessing the floatValue member of the union
    printf("The floatValue is: %f\n", ptr->floatValue);    
    printf("The intValue is: %d\n", ptr->intValue);


    return 0;
}
