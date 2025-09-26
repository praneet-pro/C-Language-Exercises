/*
    Program: Count Number of Lines in a File
    Author: Praneet S

    Description:
        This program demonstrates how to count the number of lines
        present in a text file using file handling in C.
        It opens the file in read mode and increments a counter
        each time a newline character ('\n') is encountered.
        Finally, it displays the total line count.

    Example:

        Input:
            Enter the file name: input.txt

            (Assume input.txt contains:)
            Hello World!
            Welcome to File Handling.
            This is line 3.

        Output:
            The file 'input.txt' contains 3 lines.
*/

#include<stdio.h>

int main()
{
    FILE* fp;
    char source[50];
    int count = 0;

    // get the file name from user
    printf("Enter the file name: ");
    scanf(" %s", source);

    // open the file in read mode
    fp = fopen(source , "r");
    if(fp == NULL)
    {
        printf("Failed to open file: %s", source);
        return 1;
    }

    // counting the number of lines
    char ch;
    while((ch = fgetc(fp)) != EOF)
    {
        if(ch == '\n')
        {
            count++;
        }
    }
    if(count == 0 || ch != '\n')
    {
        count++;
    }
    printf("\nThe file %s contains %d lines\n", source, count);
    fclose(fp);
    return 0;
}
