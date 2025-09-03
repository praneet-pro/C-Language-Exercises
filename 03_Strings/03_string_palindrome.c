/*
    Program: String palindrome
    Author: Praneet S
    Description: This program checks whether the given string is palindrome or not.
    Example:
    Input:
        Enter your string: madam

    Output:
        The string is palindrome
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

//Checking palindrome or not
int flag = 1;
for(int i=0;i < count;i++)
{
    if(str[i] != str[count - 1 - i])
    {
        flag = 0;
        break;
    }
}

//Printing the output;
if(flag == 0)
{
    printf("The string is not a palindrome\n");
}
else
{
    printf("The string is palindrome\n");
}
return 0;       //Program ends successfully
}
