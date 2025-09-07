/*
    Program: String Traversal using Pointers
    Author: Praneet S
    Description: This program demonstrates how to access and print characters
                 of a string using pointers. Instead of using array indexing,
                 pointer arithmetic is used to traverse through the string.

    Example:
    Input:
        Enter a string: hello

    Output:
        Characters of string using pointers:
        h e l l o
*/

#include<stdio.h>

int main()
{
//Getting input from user
char str[50];
printf("Enter a string: ");
scanf(" %s", str);

//Declaration and initialization of pointer
char *p = str;
printf("\nCharacters of string using pointers:\n");
while(*p != '\0')
{
    printf(" %c", *p);
    p++;
}
printf("\n");
return 0;
}
