/*
    Program: Swap Two Numbers using Pointers
    Author: Praneet S
    Description: This program swaps the values of two variables using
                 pointers. It demonstrates how pointers can be used
                 to directly modify variable values in memory.

    Example:
    Input:
        Enter first number: 5
        Enter second number: 10

    Output:
        Before swapping:
        First number: 5
        Second number: 10

        After swapping:
        First number: 10
        Second number: 5
*/
#include<stdio.h>

int main()
{
int num_1, num_2;
printf("Enter first number: ");
scanf("%d", &num_1);
printf("Enter second number: ");
scanf("%d", &num_2);

//Declaration and initialization of pointers
int *a = &num_1;
int *b = &num_2;

printf("\nBefore swapping:\n");
printf("First number: %d\n", num_1);
printf("Second number: %d\n", num_2);

//Swapping using pointers
int temp = *a;
*a = *b;
*b = temp;

printf("\nAfter swapping:\n");
printf("First number: %d\n", num_1);
printf("Second number: %d\n", num_2);
return 0;
}
