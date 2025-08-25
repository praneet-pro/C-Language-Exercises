/*
    Program: Palindrome check
    Author: Praneet S
    Description: This program checks whether the given number is palindrome or not.

    Example:
    Input: Enter your number: 1221

    Output: The number is a Palindrome
*/

#include <stdio.h>

int main()
{
//Declaring variables to store values
int number,digit,reverse=0;

//Getting input from user
printf("Enter your number: ");
scanf("%d",&number);

int temp = number;      //storing the value of number in a variable

//Calculating the reverse of the number
while(number > 0)
{
    digit = number%10;
    reverse = reverse*10 + digit;
    number/=10;
}

//checking whether palindrome or not
if(reverse == temp)
    printf("The number is a Palindrome");
else
    printf("The number is not a Palindrome");
return 0;       //Program ends successfully
}
