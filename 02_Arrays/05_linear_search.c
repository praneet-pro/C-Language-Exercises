/*
    Program: Linear search
    Author: Praneet S
    Description: This program finds an element in array using Linear search.
    Example:
    Input:
        Enter size of array: 5
        Enter 5 elements: 1  2  3  4  5
        Enter the target element:4

    Output:
        Target element found at position 4
*/

#include <stdio.h>

int main()
{
//Getting the size of the array from user
int n;
printf("Enter size of array: ");
scanf("%d", &n);

int arr[n];
//Getting array elements from user
printf("Enter %d elements: \n", n);
for(int i = 0;i < n;i++)
{
    scanf("%d", &arr[i]);
}

//Getting the target element to search from user
int target, i, flag=0;      //Declaration of variables to store values
printf("Enter the target element: ");
scanf("%d", &target);

//Searching for the target element
for(i = 0;i < n;i++)
{
    if(arr[i] == target)
    {
        flag = 1;
        break;
    }
}

//Printing the output
if(flag == 1)
    printf("Target element found at position %d \n", i+1);
else
    printf("Target element not found\n");
return 0;       //Program ends successfully
}
