/*
    Program: Pointer Arithmetic Demonstration
    Author: Praneet S
    Description: This program demonstrates pointer arithmetic by accessing
                 array elements using pointer increment and decrement.

    Example:
    Input:
        Enter size of array: 5
        Enter 5 elements: 10 20 30 40 50

    Output:
        Traversing array using pointer arithmetic:

        Forward traversal using p++:
        Element 1: 10
        Element 2: 20
        Element 3: 30
        Element 4: 40
        Element 5: 50

        Backward traversal using p--:
        Element 5: 5
        Element 4: 4
        Element 3: 3
        Element 2: 2
        Element 1: 1
*/

#include<stdio.h>

int main()
{
// getting the size of array from user
int n;
printf("Enter size of array: ");
scanf("%d", &n);

// getting input from user
int arr[n];
printf("Enter %d elements:\n", n);
for(int i = 0;i < n;i++)
{
    scanf("%d", &arr[i]);
}

// declaration and initialization of pointer variable
int *p = arr;
printf("\nTraversing array using pointer arithmetic:\n");
// Forward traversal using p++
printf("\nForward traversal using p++:\n");
for(int i = 0; i < n; i++)
{
    printf("Element %d: %d\n", i + 1, *p);
    p++;
}

// Backward traversal using p--
printf("\nBackward traversal using p--:\n");
for(int i = n - 1; i >= 0; i--)
{
    p--;
    printf("Element %d: %d\n", i + 1, *p);
}

return 0;
}
