/*
    Program: Search for a Word in a File
    Author: Praneet S

    Description:
        This program demonstrates how to search for a specific word
        inside a text file using file handling in C. The program reads
        the contents of the file line by line and checks if the given
        search word exists. If found, it displays the line(s) where the
        word occurs, otherwise it reports that the word was not found.

    Example:
        Input:
            Enter the file name: input.txt
            Enter the word to search: Hello

            (Assume input.txt contains:)
            Hello World!
            Welcome to File Handling in C.
            This is a test file.

        Output:
            Word "Hello" found in line 1.
*/

#include <stdio.h>
#include <string.h>

int main()
{
    FILE* fp;
    char source[50];
    char word[50];
    char buffer[200];
    int found = 0;
    int line = 0;

    // Get the file name from user
    printf("Enter the file name: ");
    scanf("%49s", source);

    // Get the word to search
    printf("Enter the word to search: ");
    scanf("%49s", word);

    // Open the file in read mode
    fp = fopen(source, "r");
    if (!fp)
    {
        printf("File %s does not exist\n", source);
        return 1;
    }

    // Search for word
    while (fgets(buffer, sizeof(buffer), fp))
    {
        line++;
        if (strstr(buffer, word) != NULL)
        {
            printf("Word \"%s\" found in line %d.\n", word, line);
            found = 1;
        }
    }

    if (!found)
    {
        printf("Word \"%s\" is not found.\n", word);
    }

    fclose(fp);
    return 0;
}
