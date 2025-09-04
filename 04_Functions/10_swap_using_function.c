/*
    Program: Swapping using function
    Author: Praneet S
    Description: This program swaps two numbers using a function.
    Example:
    Input:
        Enter the first number: 5
        Enter the second number: 10
    Output:
        Before swapping: a = 5, b = 10
        After swapping: a = 10, b = 5
*/

#include <stdio.h>

// Function to swap two numbers using pointers
void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
int a, b;   // Declaration of variables

// Getting input from user
printf("Enter the first number: ");
scanf("%d", &a);
printf("Enter the second number: ");
scanf("%d", &b);

// Printing before swap
printf("Before swapping: a = %d, b = %d\n", a, b);

// Function call
swap(&a, &b);

// Printing after
printf("After swapping: a = %d, b = %d\n", a, b);
return 0;
}
