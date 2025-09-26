/*
    Program: Fibonacci Series
    Author: Praneet S
    Description: This program finds the Fibonacci series upto n terms.

    Example:
    Input: Enter the number of terms: 7

    Output: Fibonacci series: 1  1  2  3  5  8  13

    Note: This version starts from 1
*/

#include <stdio.h>

int main()
{
//Declaring variables to store values
int n, temp;
int num1, num2;

//Assigning the 1st and 2nd term
num1 = 0;
num2 = 1;

//Getting the number of terms from the user
printf("Enter the number of terms: ");
scanf("%d", &n);
printf("Fibonacci series: ");

//Calculating and printing the Fibonacci series
for(int i = 0;i < n;i++)
{
    printf("%d\t", num2);
    temp = num2;
    num2 = num1 + num2;
    num1 = temp;
}
return 0;       //Program ends successfully
}
