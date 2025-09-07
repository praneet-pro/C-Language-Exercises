/*
    Program: Malloc vs Calloc Demonstration
    Author: Praneet S
    Description: This program demonstrates the difference between malloc()
                 and calloc() in C. malloc() allocates memory but does not
                 initialize it (may contain garbage values), while calloc()
                 allocates memory and initializes all values to zero.

    Example:
    Input:
        Enter number of elements: 5
        Enter 5 elements for malloc array: 10 20 30 40 50

    Output:
        Values in malloc array:
        10 20 30 40 50

        Values in calloc array:
        0 0 0 0 0
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // allocate memory dynamically for 'n' integers
    int *mallocArr = (int *)malloc(n * sizeof(int));

    // check if memory allocation was successful
    if (mallocArr == NULL)
    {
        printf("Memory not allocated\n");
        return 1;
    }

    // take input from user
    printf("Enter %d elements for malloc array:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &mallocArr[i]);
    }

    // print the elements entered
    printf("\nValues in malloc array:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", mallocArr[i]);
    }

    // allocate memory dynamically using calloc
    int *callocArr = (int *)calloc(n, sizeof(int));

    // check if memory allocation was successfully
    if (callocArr == NULL)
    {
        printf("Memory not allocated\n");
        return 1;
    }

    // print the value allocated for calloc
    printf("\n\nValues in calloc array: \n");
    for(int i = 0;i < n;i++)
    {
        printf("%d  ", callocArr[i]);
    }
    printf("\n");

    // free the allocated memory before program ends
    free(mallocArr);
    free(callocArr);

    return 0;   // program ends successfully
}
