/*
Program: Power Function
Author: Praneet S
Description: This program calculates the power of a number (base^exponent) using a function.

Example:
Input:
    Enter the base: 2
    Enter the exponent: 5

Output:
    2 raised to the power 5 is: 32
*/

#include <stdio.h>

//Recursive function to calculate power
int power(int base, int exponent)
{
    if(exponent == 0)
    {
        return 1;
    }
    if(exponent > 0)
    {
        return base * power(base, exponent - 1);
    }
}

int main()
{
int base, exponent;

// Getting input from user
printf("Enter the base: ");
scanf("%d", &base);
printf("Enter the exponent: ");
scanf("%d", &exponent);

// Printing result
if(base == 0)
{
    printf("%d raised to the power %d is: Undifined\n", base, exponent);
}
else
{
printf("%d raised to the power %d is: %d\n", base, exponent, power(base, exponent));
}
return 0;       // Program ends successfully
}
