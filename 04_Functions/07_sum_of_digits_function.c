/*
Program: Sum of digits
Author: Praneet S
Description: This program calculates the sum of digits of a number using function.

Example:
Input:
    Enter the number: 12345
Output:
    The sum of digits: 15
*/

#include <stdio.h>

//Recursive function to calculate sum of digits
int sum_of_digits(int n)
{
    int digit = n % 10;
    if(n == 0)
    {
        return 0;
    }
        n /= 10;
        return digit + sum_of_digits(n);
}

int main()
{
int num;

// Getting input from user
printf("Enter the number: ");
scanf("%d", &num);

// Printing result
printf("The sum of digits: %d\n", sum_of_digits(num));
return 0;       // Program ends successfully
}
