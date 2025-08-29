/*
    Program: Selection sort
    Author: Praneet S
    Description: This program sorts the elements in an array(descending order) by using Selection sort method.
    Example:
    Input:
        Enter size of array: 5
        Enter 5 elements: 7  9  6  5  8

    Output:
        Sorted array: 9  8  7  6  5
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

//Selection sort
for(int i=0;i < n-1;i++)
{
    int large=i;
    for(int j=i;j < n;j++)
    {
        if(arr[j] > arr[large])
        {
            large = j;
        }
    }
    int temp = arr[large];
    arr[large] = arr[i];
    arr[i] = temp;
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
