/*
    Program: Pointer to Pointer Demonstration
    Author: Praneet S
    Description: This program demonstrates the concept of a pointer to pointer.
                 It shows how a variable's value can be accessed directly,
                 through a single pointer, and through a double pointer.
                 And how it indirectly reference memory.

    Example:
    Input:
        Enter a number: 42

    Output:
        Value of variable: 42
        Value accessed through single pointer: 42
        Value accessed through double pointer: 42
*/

#include<stdio.h>

int main()
{
//Getting input from user
int num;
printf("Enter a number: ");
scanf("%d", &num);
printf("Value of variable: %d\n", num);

//single pointer points to the variable
int *p = &num;
printf("Value accessed through single pointer: %d\n", *p);

//Double pointer points to the pointer
int **pp = &p;
printf("Value accessed through double pointer: %d\n", **pp);
return 0;
}
