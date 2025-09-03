/*
    Program: String compare
    Author: Praneet S
    Description: This program compares two strings and says whether they same or not.
    Example:
    Input:
        Enter your first string: Clanguage
        Enter your second string: Clanguage

    Output:
        The strings are same
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

while(str_1[j] != '\0')
{
    count++;
    j++;
}

//Compares both the strings
int flag = 1,i=0;

    while(str_1[i] != '\0' && str_2[i] != '\0')
    {
        if(str_1[i] != str_2[i])
        {
            flag = 0;
            break;
        }
        i++;
    }
    if(str_1[i] != '\0' || str_2[i] != '\0')
    {
        flag = 0;
    }

//Printing the output
if(flag == 0)
{
    printf("The strings are different\n");
}
else
{
    printf("The strings are same\n");
}
return 0;
}
