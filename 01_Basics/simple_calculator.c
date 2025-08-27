/*
    Program: Simple Calculaltor
    Author: Praneet S
    Description: This program acts as a simple calculator to calculate the operations(+, -, *, /) between two numbers.

    Example:
    Input:
        Enter your 1st number: 12
        Enter your 2nd number: 3
        Enter the operation to perform like(+,-,*,/): *

    Output:
        12 * 3 = 36
*/

#include<stdio.h>

int main()
{
int number_1,number_2;      //Variables to store numbers

//Getting input from user
printf("Enter your 1st number: ");
scanf("%d",&number_1);
printf("Enter your 2nd number: ");
scanf("%d",&number_2);
char operation;
printf("Enter the operation to perform like(+,-,*,/): ");
scanf(" %c",&operation);
int result=0;

//Checking the users operation and calculating result
switch(operation)
{
    case '+':
    {
        result =number_1 + number_2;        //Addition
        printf("%d + %d = %d",number_1,number_2,result);
        break;
    }
    case '-':
    {
        result =number_1 - number_2;        //Subtraction
        printf("%d - %d = %d",number_1,number_2,result);
        break;
    }
    case '*':
    {
        result =number_1 * number_2;        //Multiplication
        printf("%d * %d = %d",number_1,number_2,result);
        break;
    }
    case '/':
    {
        result =number_1 / number_2;        //Division
        printf("%d / %d = %d",number_1,number_2,result);
        break;
    }
    default:
        printf("Enter a valid operation!");     //Incase of invalid input
}
return 0;       //Code ends successfully
}
