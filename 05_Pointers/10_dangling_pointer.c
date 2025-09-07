/*
    Program: Dangling Pointer Demonstration
    Author: Praneet S
    Description: This program demonstrates the concept of a dangling pointer.
                 A dangling pointer is a pointer that points to a memory location
                 which has been freed or is no longer valid.

    Example:
    Input:
        (No input required)

    Output:
        Value before freeing: 50
        Pointer after freeing becomes dangling!
        Accessing freed memory may give garbage value: (undefined)
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    // dynamic memory allocation
    int *ptr = (int *)malloc(sizeof(int));
    *ptr = 50;
    printf("Value before freeing: %d\n", *ptr);

    // freeing the dynamically allocated memory
    free(ptr);

    // pointer is now dangling
    printf("Pointer after freeing becomes dangling!\n");
    printf("Accessing freed memory may give garbage value: %d\n", *ptr);

    // best practice: set pointer to NULL
    ptr = NULL;

    return 0;
}
