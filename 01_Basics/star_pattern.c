/*
    Program: Star Pattern
    Author: Praneet S
    Description: This program prints star pattern.

    Example:
    Input: Enter the number of rows: 5

    Output:
    *
    * *
    * * *
    * * * *
    * * * * *
*/

#include <stdio.h>

int main()
{
int rows;

//getting input from user
printf("Enter the number of rows: ");
scanf("%d",&rows);

//printing star pattern
for(int i=0;i <= rows;i++)
{
    for(int j=0;j <= i;j++)     //Nested for loop
    {
        printf("* ");
    }
    printf("\n");
}
return 0;       //Program ends successfully
}
