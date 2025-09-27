/*
    Program: Maximum and minimum element in array using function
    Author: Praneet S
    Description: This program finds the maximum and minimum element in the array using function.
    Example:
    Input:
        Enter size of array: 5
        Enter 5 elements: 1  2  3  4  5

    Output:
        Maximum value of array: 5
        Minimum value of array: 1
*/

#include <stdio.h>

//Finding the maximum and minimum element of array
void findMaxMin(int arr[], int n, int *max, int *min)
{
    *max = arr[0];
    *min = arr[0];
    for(int i = 1;i < n;i++)
    {
        if(arr[i] > *max)
        {
            *max = arr[i];
        }
        if(arr[i] < *min)
        {
            *min = arr[i];
        }
    }
}

int main()
{
//Getting the size of the array from user
int n;
printf("Enter size of array: ");
scanf("%d",&n);

int arr[n];
//Getting array elements from user
printf("Enter %d elements: \n",n);
for(int i = 0;i < n;i++)
{
    scanf("%d",&arr[i]);
}

int max, min;
findMaxMin(arr, n, &max, &min);     //Function call

//Printing the output
printf("Maximum value of array: %d\n", max);
printf("Minimum value of array: %d\n", min);
return 0;       //Program ends successfully
}
