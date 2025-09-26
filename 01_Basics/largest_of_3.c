/*
    Program: Largest of 3 numbers
    Author: Praneet S
    Description: This program finds the largest number of 3 numbers

    Example:
    Input:
        Enter 1st number: 12
        Enter 2nd number: 8
        Enter 3rd number: 20

    Output:
        The largest of (12,8,20) is: 20
*/

#include<stdio.h>

int main()
{
//Declaration of variable to store values
int num_1, num_2, num_3;
int largest;

//Getting inputs from user
printf("Enter 1st number: ");
scanf("%d", &num_1);
printf("Enter 2nd number: ");
scanf("%d", &num_2);
printf("Enter 3rd number: ");
scanf("%d", &num_3);

//checking for the largest of 3 numbers
if(num_1 > num_2 && num_1 > num_3)
    largest = num_1;
else if(num_2 > num_3)
    largest = num_2;
else
    largest = num_3;

printf("The largest of (%d,%d,%d) is: %d", num_1, num_2, num_3, largest);
return 0;       //Code ends successfully
}
