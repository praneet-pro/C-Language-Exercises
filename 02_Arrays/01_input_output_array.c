/*
    Program: Array input and output
    Author: Praneet S
    Description: This program gets an array elements as input from the user and prints it as output.

    Example:
    Input:
        Enter size of array: 5
        Enter 5 elements: 1  2  3  4  5

    Output:
        Array elements are: 1  2  3  4  5
*/

#include <stdio.h>

int main()
{
//Getting the size of the array from user
int n;
printf("Enter size of array: ");
scanf("%d", &n);

int  arr[n];        //declaring an array of size n to store values

//Getting array elements from user
printf("Enter %d elements:\n", n);
for(int i = 0;i < n;i++)
{
    scanf("%d", &arr[i]);
}

//Printing the array elements
printf("Array elements are: ");
for(int i=0;i < n;i++)
{
    printf("%d  ", arr[i]);
}
return 0;       //Program ends successfully
}
