/*
    Program: Frequency count of string
    Author: Praneet S
    Description: This program counts the occurrence of each character in a string.
    Example:
    Input:
        Enter your string: banana

    Output:
        b - 1
        a - 3
        n - 2
*/

#include <stdio.h>

int main()
{
//Declaration of variables to store values
char str[50];
int i=0,j=0;
int freq[256] = {0};

//Getting string as input from user
printf("Enter your string: ");
scanf(" %s",str);

//count frequencies
while(str[i] != '\0')
{
    freq[(int)str[i]]++;
    i++;
}

//print frequency
while(str[j] != '\0')
{
    if(freq[(int)str[j]] != 0)
    {
        printf("%c - %d\n",str[j],freq[(int)str[j]]);
        freq[(int)str[j]] = 0;
    }
    j++;
}
return 0;       //program ends successfully
}
