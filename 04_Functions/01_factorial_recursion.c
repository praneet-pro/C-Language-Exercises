/*
    Program: Factorial using Recursion
    Author: Praneet S
    Description: This program finds the factorial of a number using recursion.
    Example:
    Input:
        Enter the number: 5
    Output:
        The factorial of 5 is: 120
*/

#include <stdio.h>

// Recursive function to calculate factorial
int factorial(int n)
{
    if(n == 0 || n == 1)   // base case
        return 1;
    else
        return n * factorial(n - 1);  // recursive call
}

int main()
{
    int number;

    // Getting input from user
    printf("Enter the number to find factorial: ");
    scanf("%d",&number);

    // Printing result
    printf("The factorial of %d is: %d\n", number, factorial(number));

    return 0;       // Program ends successfully
}
