/*
    Program: Realloc Demonstration
    Author: Praneet S
    Description: This program demonstrates the use of the realloc() function
                 in C. First, memory is dynamically allocated using malloc(),
                 and elements are entered by the user. Then, the memory block
                 is resized using realloc() to hold more elements. The program
                 shows how realloc() preserves existing data while allowing
                 the array size to expand.

    Example:
    Input:
        Enter initial number of elements: 3
        Enter 3 elements: 10 20 30
        Enter new size of array: 5
        Enter 2 more elements: 40 50

    Output:
        Elements in array after realloc:
        10 20 30 40 50
*/

#include<stdio.h>
#include<stdlib.h>

int main()
{
int oldSize, newSize;
printf("Enter initial number of elements: ");
scanf("%d", &oldSize);

// allocate memory dynamically for 'oldSize' integers
int *arr = (int *)malloc(oldSize * sizeof(int));

//check if memory allocation was successful
if(arr == NULL)
{
    printf("Memory not allocated\n");
    return 1;
}

// getting input from user
printf("Enter %d elements:\n", oldSize);
for(int i = 0;i < oldSize;i++)
{
    scanf("%d", &arr[i]);
}


printf("Enter new size of array: ");
scanf("%d", &newSize);

// reallocating memory dynamically
arr = (int *)realloc(arr, newSize * sizeof(int));

// check if memory allocation was successful
if(arr == NULL)
{
    printf("Memory not allocated\n");
    return 1;
}

// getting the extra elements from user
printf("Enter %d more elements: \n", newSize - oldSize);
for(int i = oldSize;i < newSize;i++)
{
    scanf("%d", &arr[i]);
}

// Printing elements in array after realloc
printf("\nElements in array after realloc:\n");
for(int i = 0;i < newSize;i++)
{
    printf("%d  ", arr[i]);
}
printf("\n");

// Free the allocated memory before program ends
free(arr);

return 0;       // Program ends successfully
}
