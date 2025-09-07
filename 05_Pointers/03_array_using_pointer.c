/*
    Program: Array Traversal using Pointers
    Author: Praneet S
    Description: This program demonstrates how to access and print elements
                 of an array using pointers instead of array indexing.
                 It shows how pointer arithmetic can be used to traverse arrays.

    Example:
    Input:
        Enter size of array: 5                      // Note: This program assumes the user enters a positive array size
        Enter 5 elements: 10 20 30 40 50

    Output:
        Elements of array using pointers:
        10 20 30 40 50
*/
#include<stdio.h>

int main()
{
int n;
printf("Enter size of array: ");
scanf("%d", &n);
int arr[n];

//Getting the array elements from user
printf("Enter %d elements:\n", n);
for(int i = 0;i < n;i++)
{
    scanf("%d", &arr[i]);
}

//Declaration and initialization of pointer variable
int *p = arr;

printf("\nElements of array using pointers:\n");
for(int i = 0;i < n;i++)
{
    printf("%d  ", *(p + i));       //Pointer arithmetic
}
printf("\n");
return 0;
}
