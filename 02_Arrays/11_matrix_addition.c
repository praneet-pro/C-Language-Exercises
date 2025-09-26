/*
    Program: Matrix addition
    Author: Praneet S
    Description: This program finds the sum of two matrices.
    Example:
    Input:
        Enter number of rows: 2
        Enter number of columns: 3
        Enter elements of first matrix:
        1  2  3
        4  5  6

        Enter elements of second matrix:
        7  8  9
        1  2  3

    Output:
        Resultant matrix (Addition):
        8  10  12
        5  7   9
*/

#include <stdio.h>

int main()
{
//Getting the number of rows and columns from user
int rows, col;
printf("Enter number of rows: ");
scanf("%d", &rows);
printf("Enter number of columns: ");
scanf("%d", &col);

//Getting matrix elements from user
int arr_1[rows][col];
printf("\nEnter elements of first matrix: \n");
for(int i = 0;i < rows;i++)
{
    for(int j = 0;j < col;j++)
    {
    scanf("%d",&arr_1[i][j]);
    }
}
int arr_2[rows][col];
printf("\nEnter elements of second matrix: \n");
for(int i = 0;i < rows;i++)
{
    for(int j = 0;j < col;j++)
    {
    scanf("%d", &arr_2[i][j]);
    }
}

//Calculating the sum of two the matrices
int arr_3[rows][col];
for(int i = 0;i < rows;i++)
{
    for(int j = 0;j < col;j++)
    {
        arr_3[i][j] = arr_1[i][j] + arr_2[i][j];
    }
}

//Printing the resultant matrix
printf("\nResultant matrix (Addition):\n");
for(int i = 0;i < rows;i++)
{
    for(int j = 0;j < col;j++)
    {
        printf("%d  ", arr_3[i][j]);
    }
    printf("\n");
}
return 0;       //Program ends successfully
}
