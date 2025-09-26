/*
Program: File Read and Write
Author: Praneet S
Description:
    This program demonstrates the basics of file handling in C.
    It writes user input (a string) into a file named "sample.txt"
    and then reads the same content back from the file to display on the console.

Input Format:
    - The program takes a single line of text (string) from the user.
    Example:
        Enter text to write into file: Hello, SSN!

Output Format:
    - The program creates a file named "sample.txt", writes the input text into it,
      and then displays the same text by reading from the file.
    Example Output:
        Data successfully written to file.
        Reading data from file:
        Hello, SSN!
*/

#include<stdio.h>

int main()
{
    FILE* fp;
    char buffer[100];

    // Open file for writing
    fp = fopen("sample.txt", "w");
    if(fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("Enter text to write into file: ");
    scanf(" %[^\n]", buffer);
    fputs(buffer, fp);
    printf("Data successfully written into file.\n");
    fclose(fp);

    // Reopen file for reading
    fp = fopen("sample.txt", "r");
    if(fp == NULL)
    {
        printf("Error opening file!\n");
        return 1;
    }

    printf("\nReading data from file:\n");
    while(fgets(buffer, sizeof(buffer), fp) != NULL)
    {
        printf("%s", buffer);
    }
    fclose(fp);
    return 0;
}

