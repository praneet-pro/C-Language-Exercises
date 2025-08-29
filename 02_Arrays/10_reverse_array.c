/*
    Program: Reverse of array
    Author: Praneet S
    Description: This program reverses an array and prints it
                 (Logic: Swap first element with last, second with second last, and so on until middle.
.
    Example:
    Input:
        Enter size of array: 5
        Enter 5 elements: 1  2  3  4  5

    Output:
        Reversed array: 5  4  3  2  1
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

//Reversing the array
for(int i=0;i < n/2;i++)
{
    int temp = arr[i];
    arr[i] = arr[n - i - 1];
    arr[n - i - 1] = temp;
}

//Printing the reversed array
printf("Reversed array: ");
for(int i=0;i < n;i++)
{
    printf("%d  ",arr[i]);
}
printf("\n");
return 0;       //Program ends successfully
}
