/*
    Program: Matrix multiplication
    Author: Praneet S
    Description: This program finds the multiplication of two matrices.
    Example:
    Input:
        Enter rows and columns of first matrix: 2 3
        Enter elements of first matrix:
        1  2  3
        4  5  6

        Enter rows and columns of second matrix: 3 2
        Enter elements of second matrix:
        7   8
        9  10
        11 12

    Output:
        Resultant matrix (Multiplication):
        58   64
        139  154

*/

#include <stdio.h>

int main()
{

//Getting the elements for first matrix from user
int row_1, col_1;
printf("Enter rows and columns of first matrix: ");
scanf("%d %d", &row_1, &col_1);
int arr_1[row_1][col_1];
printf("\nEnter elements of first matrix: \n");
for(int i = 0;i < row_1;i++)
{
    for(int j = 0;j < col_1;j++)
    {
    scanf("%d",&arr_1[i][j]);
    }
}

//Getting the elements for second matrix from user
int row_2, col_2;
printf("\nEnter rows and columns of second matrix: ");
scanf("%d %d", &row_2, &col_2);
int arr_2[row_2][col_2];
printf("\nEnter elements of second matrix: \n");
for(int i = 0;i < row_2;i++)
{
    for(int j = 0;j < col_2;j++)
    {
    scanf("%d", &arr_2[i][j]);
    }
}

//checking whether matrix multiplication is possible or not
if(col_1 != row_2)
{
    printf("Matrix multiplication not possible\n");
    return 0;
}

//calculating matrix multiplication
int arr_3[row_1][col_2];
for(int i = 0;i < row_1;i++)
{
    for(int j = 0;j < col_2;j++)
    {
         arr_3[i][j] = 0;
        for(int k= 0;k < col_1;k++)
        {
            arr_3[i][j] += arr_1[i][k] * arr_2[k][j];
        }
    }
}

//printing the resultant matrix
printf("Resultant matrix (Multiplication):\n");
for(int i = 0;i < row_1;i++)
{
    for(int j = 0;j < col_2;j++)
    {
        printf("%d  ", arr_3[i][j]);
    }
    printf("\n");
}
return 0;       //Program ends successfully
}
