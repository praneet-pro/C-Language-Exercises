/*
    Program: Prime Check
    Author: Praneet S
    Description: This program checks whether the given number is prime number or not.

    Example:
    Input: Enter your number: 17

    Output: The number is prime
*/

#include <stdio.h>

int main()
{
int number;      //Declaration of variable to store value
int flag = 0;     //Flag variable

//Getting input from user
printf("Enter your number: ");
scanf("%d",&number);

//Checking whether prime or not(iterative method)
for(int i = 2;i <= number/2;i++)
{
    if(number % i == 0)
    {
        flag = 1;
        break;
    }
}

//Printing output
if(flag == 0)
    printf("The number is a prime");
else
    printf("The number is not a prime");
return 0;       //Program ends successfully
}
