/*
    Program: String length
    Author: Praneet S
    Description: This program counts the number of characters in a string.
    Example:
    Input:
        Enter your string: abcdefg

    Output:
        Length of the string: 7
*/

#include <stdio.h>

int main()
{
//Declaration of variables to store values
char str[50];
int i=0,count=0;

//Getting string as input from user
printf("Enter your string: ");
scanf(" %s",str);

//Counts the number of characters
while(str[i] != '\0')
{
    count++;
    i++;
}
printf("Length of string: %d\n",count);
return 0;       //Program ends successfully
}
