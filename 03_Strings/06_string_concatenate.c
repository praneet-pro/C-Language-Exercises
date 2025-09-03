/*
    Program: String concatenate
    Author: Praneet S
    Description: This program gets two strings and concatenates one with another.
    Example:
    Input:
        Enter your first string: C
        Enter your second string: language

    Output:
        Concatenated string is: Clanguage
*/

#include <stdio.h>

int main()
{
//Declaration of variables to store values
char str_1[50],str_2[50];
int j=0,count=0;

//Getting string as input from user
printf("Enter your first string: ");
scanf(" %s",str_1);
printf("Enter your second string: ");
scanf(" %s",str_2);

//counting the number of characters in 1st string
while(str_1[j] != '\0')
{
    count++;
    j++;
}

//concatenating second string to first
int i=0;
while(str_2[i] != '\0')
{
    str_1[count] = str_2[i];
    i++;
    count++;
}
str_1[count] = '\0';

printf("Concatenated string is: %s\n",str_1);
return 0;       //Program ends successfully
}
