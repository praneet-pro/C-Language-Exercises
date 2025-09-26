/*
    Program: Armstrong Number
    Author: Praneet S
    Description: This program checks whether the given number Armstrong number or not.

    Example:
    Input: Enter your number: 153
    Output: It is an Armstrong number
*/

#include<stdio.h>
#include<math.h>
int count_digit(int n);
int main()
{
int number, count, digit, power, sum = 0;     //Declaration of variables to store values

//Getting input from user
printf("Enter your number: ");
scanf("%d", &number);
int temp = number;      //Storing the number in temp variable
count = count_digit(number);    //Calling the function and storing value in count

//calculating sum of power of digits
while(number > 0)
{
    digit = number % 10;
    power = pow(digit, count);
    sum += power;         //
    number /= 10;
}

//Checking Armstrong number or not
if(sum == temp)
    printf("It is an Armstrong number");
else
    printf("It is not an Armstrong number");
return 0;       //Program ends successfully
}
int count_digit(int n)      //Helper function to count number of digits
{
int count = 0;
while(n > 0)
{
    count++;
    n /= 10;
}
return count;
}
