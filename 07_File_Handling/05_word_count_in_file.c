/*
    Program: Word Count in File
    Author: Praneet S

    Description:
        This program counts the total number of words in a given text file
        using file handling in C. A word is defined as a sequence of characters
        separated by spaces, tabs, or newline characters. The program reads the
        file character by character and increments the word count whenever it
        encounters a transition from a non-space character to a space, tab, or newline.

    Example:

        Input:
            Enter the file name: input.txt

            (Assume input.txt contains:)
            Hello World!
            Welcome to File Handling in C.

        Output:
            The file contains 7 words.
*/

#include <stdio.h>
#include <ctype.h> // for isspace

int main() {
    FILE* fp;
    char source[50];
    int count = 0;
    int inword = 0;
    char ch;

    // get the file name from user
    printf("Enter the file name: ");
    scanf("%49s", source);

    // open the file in read mode
    fp = fopen(source, "r");
    if (!fp)
    {
        printf("File %s does not exist\n", source);
        return 1;
    }

    // counting the number of words
    while ((ch = fgetc(fp)) != EOF)
    {
        if (!isspace(ch) && inword == 0)
        {
            count++;
            inword = 1;
        }
        else if (isspace(ch) && inword == 1)
        {
            inword = 0;
        }
    }

    printf("The file contains %d words.\n", count);
    fclose(fp);
    return 0;
}
