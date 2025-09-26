/*
    Program: Reverse of a number
    Author: Praneet S
    Description: This program finds the reverse of a number.

    Example:
    Input: Enter your number: 12345

    Output: The reverse of the number is: 54321
*/

#include <stdio.h>

int main()
{
//Declaring variables to store values
int number, digit, reverse=0;

//Getting input from user
printf("Enter your number: ");
scanf("%d", &number);

//Calculating the reverse of the number
while(number > 0)
{
    digit = number % 10;
    reverse = reverse*10 + digit;
    number/=10;
}
printf("The reverse of the number is: %d",reverse);
return 0;       //Program ends successfully
}
