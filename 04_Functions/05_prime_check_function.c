/*
    Program: Prime Check using function.
    Author: Praneet S
    Description: This program checks whether the given number is prime number or not by using function.

    Example:
    Input: Enter your number: 17

    Output: This number is prime
*/

#include <stdio.h>
#include<math.h>

int prime_check(int n)
{
    if(n == 0 || n == 1)
    {
        return 0;
    }
    for(int i = 2;i <= sqrt(n);i++)
    {
        if(n % i == 0)
        {
            return 0;       //not prime
        }
    }
    return 1;       //prime
}

int main()
{
int number;      //Declaration of variable to store value

//Getting input from user
printf("Enter your number: ");
scanf("%d",&number);

//Printing output
if(prime_check(number))
{
    printf("The number is prime\n");
}
else
{
    printf("The number is not prime\n");
}
return 0;       //Program ends successfully
}
