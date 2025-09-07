/*
    Program: String copy
    Author: Praneet S
    Description: This program gets a string and copies it in another variable.
    Example:
    Input:
        Enter your string: Google

    Output:
        Copied string: Google
*/

#include <stdio.h>

int main()
{
//Declaration of variables to store values
char str[50],str_cpy[50];
int i=0;

//Getting string as input from user
printf("Enter your string: ");
scanf(" %s",str);

//Copying string
while(str[i]  != '\0')
{
    str_cpy[i] = str[i];
    i++;
}
str_cpy[i] = '\0';

//Printing the output
printf("Copied string: %s",str_cpy);
return 0;
}
