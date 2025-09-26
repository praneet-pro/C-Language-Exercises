/*
    Program: Bubble sort
    Author: Praneet S
    Description: This program sorts the elements in an array(ascending order) by using Bubble sort method.
    Example:
    Input:
        Enter size of array: 5
        Enter 5 elements: 4  3  1  5  2

    Output:
        Sorted array: 1  2  3  4  5
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

//Bubble sort
for(int i = 0;i < n-1;i++)
{
    int flag = 0;
    for(int j = 0;j < n-i-1;j++)
    {
        if(arr[j] > arr[j+1])
        {
        int temp = arr[j];
        arr[j] = arr[j+1];
        arr[j+1] = temp;
        flag = 1;
        }
    }
       if(flag == 0)
        break;
}

//Printing the sorted array
printf("Sorted array: ");
for(int i = 0;i < n;i++)
{
    printf("%d  ", arr[i]);
}
printf("\n");
return 0;       //Program ends successfully
}
