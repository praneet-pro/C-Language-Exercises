/*
    Program: Sum of two numbers
    Author: Praneet S
    Description: This program finds the sum of two numbers.

    Example:
    Input: Enter your 1st number: 20
           Enter your 2nd number: 40
    Output: The sum is: 60
*/

#include <stdio.h>

int main() {
    int a, b;    // Variables to store inputs

    //Taking input values
    printf("Enter your 1st number: ");
    scanf("%d", &a);
    printf("Enter your 2nd number: ");
    scanf("%d", &b);

    //calculate sum
    int sum = a+b;

    //Display result
    printf("The sum is: %d", sum);

    return 0;   //Program ends successfully
}
