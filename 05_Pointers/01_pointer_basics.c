/*
    Program: Pointer Basics (Address and Value)
    Author: Praneet S
    Description: This program demonstrates the basics of pointers by
                 printing the value of a variable, its address, and
                 the value accessed using a pointer.

    Example:
    Input:
        Enter a number: 25

    Output:
        Value of variable: 25
        Address of variable: 0x7ffeefbff5a4   (example, will vary)
        Value accessed through pointer: 25
*/

#include<stdio.h>

int main()
{
int num;

//Getting input from user
printf("Enter a number: ");
scanf("%d", &num);

//Declaration and initialization of pointer variable
int *p = &num;

//Printing output
printf("Value of variable: %d\n", num);
printf("Address of variable: %p\n", p);
printf("Value accessed through pointer: %d\n", *p);
return 0;
}
