/*
Program: File Append Program with Display
Author : Praneet S
Description:
    This program demonstrates how to append text to an existing file.
    It first displays the contents of the file (if it exists),
    then allows the user to append new text, and finally re-displays
    the updated contents of the file.

Input:
    Enter a line of text that you want to append to the file.

Output:
    - Current contents of the file before appending
    - Confirmation message that text has been appended
    - Updated contents of the file after appending
*/

#include <stdio.h>

int main() {
    FILE *fp;
    char buffer[200];
    char text[100];

    // Step 1: Open file in read mode to show old content
    fp = fopen("sample.txt", "r");
    if (fp != NULL)
    {
        printf("Current contents of file:\n");
        while (fgets(buffer, sizeof(buffer), fp) != NULL)
        {
            printf("%s", buffer);
        }
        fclose(fp);
    }
    else
    {
        printf("File does not exist yet. It will be created.\n");
    }

    // Step 2: Open file in append mode
    fp = fopen("sample.txt", "a");
    if (fp == NULL)
    {
        printf("Error opening file for appending.\n");
        return 1;
    }

    printf("\nEnter text to append: ");
    scanf(" %[^\n]", text);

    // Write (append) to file
    fprintf(fp, "%s\n", text);

    fclose(fp);
    printf("Text appended successfully.\n");

    // Step 3: Show contents again after appending
    fp = fopen("sample.txt", "r");
    if (fp != NULL)
    {
        printf("\nUpdated contents of file:\n");
        while (fgets(buffer, sizeof(buffer), fp) != NULL)
        {
            printf("%s", buffer);
        }
        fclose(fp);
    }

    return 0;
}
