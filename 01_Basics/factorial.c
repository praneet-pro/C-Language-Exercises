/*
    Program: Factorial
    Author: Praneet S
    Description: This program finds the factorial of a number(Iterative approach).

    Example:
    Input: Enter the number to find factorial: 5

    Output: The factorial of 5 is: 120
*/

#include <stdio.h>

int main()
{
int number;

//Getting input from user
printf("Enter the number to find factorial: ");
scanf("%d", &number);
int fact = 1;

//Calculating factorial
for(int i = 2;i <= number;i++)
{
    fact*=i;        //fact=fact*i
}
printf("The factorial of %d is: %d", number, fact);
return 0;       //Program ends successfully
}
