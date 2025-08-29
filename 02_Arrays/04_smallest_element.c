/*
    Program: Smallest element of array
    Author: Praneet S
    Description: This program finds the smallest element in the array.
    Example:
    Input:
        Enter size of array: 5
        Enter 5 elements: 1  2  3  4  5

    Output:
        Smallest element of array: 5
*/

#include <stdio.h>

int main()
{
//Getting the size of the array from user
int n;
printf("Enter size of array: ");
scanf("%d",&n);

int arr[n];
//Getting array elements from user
printf("Enter %d elements: \n",n);
for(int i=0;i < n;i++)
{
    scanf("%d",&arr[i]);
}
int small=arr[0];       //Declaration of variable to store smallest element

//Finding the small element of array
for(int i=1;i < n;i++)
{
    if(arr[i] < small)
        small = arr[i];
}
printf("Smallest element of array: %d",small);
return 0;       //Program ends successfully
}
