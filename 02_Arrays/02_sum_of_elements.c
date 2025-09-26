/*
    Program: Sum of array
    Author: Praneet S
    Description: This program calculates the sum of array elements.
    Example:
    Input:
        Enter size of array: 5
        Enter 5 elements: 1  2  3  4  5

    Output:
        Sum of array elements: 15
*/

#include <stdio.h>

int main()
{
//Getting the size of the array from user
int n;
printf("Enter size of array: ");
scanf("%d", &n);

int arr[n], sum=0;       //Declaration of variables to store values
//Getting array elements from user
printf("Enter %d elements: \n", n);
for(int i = 0;i < n;i++)
{
    scanf("%d", &arr[i]);
}

//Calculating the sum of array elements
for(int i = 0;i < n;i++)
{
    sum += arr[i];
}
printf("Sum of array elements: %d", sum);
return 0;       //Program ends successfully
}
