/*
    Program: Count vowels and consonants
    Author: Praneet S
    Description: This program counts the number of vowels and consonants in the given string.

    Example:
    Input:
        Enter your string: Cprogramming_1

    Output:
        Number of vowels: 3
        Number of consonants: 9
*/

#include <stdio.h>

int main()
{
//Declaration of variables to store values
char str[50];
//Getting input string from user
printf("Enter your string: ");
scanf(" %s",str);

//Counting the number of vowels and consonants
int i=0;
int consonant = 0,vowel = 0;
while(str[i] != '\0')
{
    if(str[i] >= 'a' && str[i] <= 'z' || str[i] >= 'A' && str[i] <= 'Z')
    {
        if(str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] =='E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
        {
            vowel++;
        }
        else
        {
            consonant++;
        }
    }
    i++;
}

//Printing the output
printf("Number of vowels: %d\n",vowel);
printf("Number of consonants: %d\n",consonant);
return 0;       //Program ends successfully
}
