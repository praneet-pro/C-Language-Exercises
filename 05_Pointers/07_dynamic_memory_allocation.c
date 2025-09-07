/*
    Program: Dynamic Memory Allocation using malloc
    Author: Praneet S
    Description: This program demonstrates dynamic memory allocation in C using malloc.
                 It allocates memory for an array of integers at runtime, takes input,
                 displays the entered elements, and frees the allocated memory.

    Example:
    Input:
        Enter number of elements: 5
        Enter 5 elements: 1 2 3 4 5

    Output:
        Elements entered are:
        1  2  3  4  5
*/

#include <stdio.h>
#include <stdlib.h>   // required for malloc() and free()

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // allocate memory dynamically for 'n' integers
    int *arr = (int *)malloc(n * sizeof(int));

    // check if memory allocation was successful
    if (arr == NULL)
    {
        printf("Memory not allocated\n");
        return 1;
    }

    // take input from user
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    // print the elements entered
    printf("\nElements entered are:\n");
    for (int i = 0; i < n; i++)
    {
        printf("%d  ", arr[i]);
    }
    printf("\n");

    // free the allocated memory before program ends
    free(arr);

    return 0;   // program ends successfully
}
