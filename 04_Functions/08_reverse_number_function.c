/*
Program: Reverse of number
Author: Praneet S
Description: This program finds the reverse of a number using function.

Example:
Input:
    Enter the number: 12345
Output:
    Reverse of number: 54321
*/

#include <stdio.h>

//Recursive function to calculate reverse of digits
int reverse(int n, int rev)
{
    int digit = n % 10;
    if(n == 0)
    {
        return rev;
    }
     return reverse(n/10, rev * 10 + digit);
}

int main()
{
int num;

//Getting input from user
printf("Enter the number: ");
scanf("%d", &num);

// Printing result
printf("Reverse of number: %d\n", reverse(num, 0));
return 0;       // Program ends successfully
}
