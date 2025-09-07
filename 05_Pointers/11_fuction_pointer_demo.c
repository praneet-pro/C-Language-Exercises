/*
    Program: Function Pointer Demonstration
    Author: Praneet S
    Description: This program demonstrates how to use function pointers
                 by storing the address of a function in a pointer and
                 calling it through the pointer.

    Example:
    Input:
        Enter two numbers: 10 20

    Output:
        Sum using normal function call: 30
        Sum using function pointer call: 30
*/

#include <stdio.h>

// function definition
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    // getting input from user
    int num_1, num_2;
    printf("Enter two numbers: ");
    scanf("%d %d", &num_1, &num_2);

    // normal function call
    printf("\nSum using normal function call: %d\n", sum(num_1, num_2));

    // function pointer declaration and assignment
    int (*funcPtr)(int, int) = sum;

    // calling function using function pointer
    printf("Sum using function pointer call: %d\n", funcPtr(num_1, num_2));

    return 0;
}
