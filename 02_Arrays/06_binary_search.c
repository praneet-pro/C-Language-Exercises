/*
    Program: Binary search
    Author: Praneet S
    Description: This program finds the target element from an array using Binary search.
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
int target, flag = 0;        //Declaration of variables to store values
printf("Enter the target element: ");
scanf("%d", &target);

//Searching for the target element
int low = 0, high = n-1;
while(low <= high)      //Binary looping
{
    int mid = (high + low)/2;
    if(arr[mid] == target)
    {
        printf("Target element found at position %d\n", mid + 1);
        flag = 1;
        break;
    }
    else if(arr[mid] < target)
    {
        low = mid + 1;
    }
    else
    {
        high = mid - 1;
    }
}
if(flag == 0)
    printf("Target element not found \n");
return 0;       //Program ends successfully
}
