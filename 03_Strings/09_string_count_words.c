/*
    Program: Count words
    Author: Praneet S
    Description: This program counts the number of words in a string.
    Example:
    Input:
        Enter your string: Hello guys, i'm learning c programming

    Output:
        Number of words: 6
*/

#include <stdio.h>

int main()
{
//Declaration of variables to store values
char str[50];
int i=0,count=0;
int inWord = 0;

//Getting string as input from user
printf("Enter your string: ");
fgets(str,50,stdin);

//counting words
while(str[i]  != '\0')
{
    if(str[i] != ' ' && str[i] != '\n')
    {
        if(inWord == 0)
        {
            inWord = 1;
            count++;
        }
    }
    if(str[i] == ' ' || str[i] == '\t' || str[i] == '\n')
    {
        inWord = 0;
    }
    i++;
}

//Printing the output
printf("Number of words: %d",count);
return 0;
}
