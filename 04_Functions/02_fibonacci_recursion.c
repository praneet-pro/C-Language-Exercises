/*
    Program: Fibonacci Series using recursion
    Author: Praneet S
    Description: This program finds the Fibonacci series upto n terms using recursion.

    Example:
    Input: Enter the number of terms: 7

    Output: Fibonacci series: 0  1  1  2  3  5  8
*/

#include <stdio.h>

int fibo(int n)
{
    if(n == 0)
        return 0;
    if(n == 1)
        return 1;
    if(n > 1)
    {
    return fibo(n - 1) + fibo(n - 2);
    }
}

int main()
{
//Declaring variables to store values
int n;

//Getting the number of terms from the user
printf("Enter the number of terms: ");
scanf("%d",&n);

//Printing the output
for(int i=0;i < n;i++)
{
printf("%d\t",fibo(i));
}

return 0;       //Program ends successfully
}
