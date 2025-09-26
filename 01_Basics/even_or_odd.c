/*
    Program: Even or Odd
    Author: Praneet S
    Description: This program finds whether the given number is odd or even.

    Example:
    Input: Enter your number: 12
    Output: Even
*/

#include<stdio.h>

int main()
{
int number;

//getting input from user
printf("Enter your number: ");
scanf("%d", &number);

//Checking even or odd
if(number % 2 == 0)
    printf("%d is Even", number);
else
    printf("%d is Odd", number);
return 0;           //Program ends successfully
}
