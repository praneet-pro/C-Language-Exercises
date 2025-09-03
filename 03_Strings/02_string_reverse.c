/*
    Program: String reverse
    Author: Praneet S
    Description: This program finds the reverse of string.
    Example:
    Input:
        Enter your string: abcde

    Output:
        Reverse of string: edcba
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
int start = 0;
int end = count - 1;

//Finding the reverse of string
while(start < end)
{
    char temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    start++;
    end--;
}

//Printing the reversed string
printf("Reverse of string: %s\n",str);
return 0;       //Program ends successfully
}
