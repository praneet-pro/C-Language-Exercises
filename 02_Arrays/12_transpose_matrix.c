/*
    Program: Transpose matrix
    Author: Praneet S
    Description: This program finds the transpose of a matrix.

    Example:
    Input:
        Enter number of rows: 2
        Enter number of columns: 3
        Enter elements of the matrix:
        1  2  3
        4  5  6

    Output:
        Transpose matrix:
        1  4
        2  5
        3  6
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
int arr[rows][col];
printf("\nEnter elements of the matrix: \n");
for(int i = 0;i < rows;i++)
{
    for(int j = 0;j < col;j++)
    {
        scanf("%d", &arr[i][j]);
    }
}

//calculating the transpose matrix
int trans[col][rows];
for(int i = 0;i < rows;i++)
{
    for(int j = 0;j < col;j++)
    {
        trans[j][i] = arr[i][j];
    }
}

//Printing the transpose matrix
printf("Transpose matrix:\n");
for(int i = 0;i < col;i++)
{
    for(int j = 0;j < rows;j++)
    {
        printf("%d  ", trans[i][j]);
    }
    printf("\n");
}
return 0;       //Program ends successfully
}
