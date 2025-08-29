/*
    Program: Insertion sort
    Author: Praneet S
    Description: This program sorts the elements in an array(ascending order) by using Insertion sort method.
    Example:
    Input:
        Enter size of array: 5
        Enter 5 elements: 7  9  6  5  8

    Output:
        Sorted array: 5  6  7  8  9
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

//Insertion sort
for(int i =1;i < n;i++)
{
    int key = arr[i];
    int j = i - 1;
    while(j >= 0 && arr[j] > key)
    {
        arr[j+1] = arr[j];
        j--;
    }
    arr[j+1] = key;
}

//Printing the sorted array
printf("Sorted array: ");
for(int i=0;i < n;i++)
{
    printf("%d  ",arr[i]);
}
printf("\n");
return 0;       //Program ends successfully
}
