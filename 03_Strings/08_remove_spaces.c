/*
    Program: Remove spaces
    Author: Praneet S
    Description: This program removes the spaces from a string.
    Example:
    Input:
        Enter your string: Completed C language

    Output:
        String after removing spaces: CompletedClanguage
*/

#include <stdio.h>

int main()
{
//Declaration of variables to store values
char str[50],s[50];
int i=0,j=0;

//Getting string as input from user
printf("Enter your string: ");
fgets(str,50,stdin);

//Removing spaces
while(str[i]  != '\0')
{
    if(str[i] != ' ')
    {
        s[j] = str[i];
        j++;
    }
        i++;
}
s[j] = '\0';

//Printing the output
printf("String after removing spaces: %s",s);
return 0;       //Program ends successfully
}
