/*
    Program: Copy File Content
    Author: Praneet S

    Description:
        This program copies the contents of one file into another using
        file handling in C. It opens a source file in read mode and a
        destination file in write mode, then copies the data line by line
        until the end of the source file is reached.

        After copying, it displays the contents of the destination file
        to confirm successful copying.

    Example:

        Input:
            Enter the source file name: input.txt
            Enter the destination file name: output.txt

            (Assume input.txt contains:)
            Hello World!
            Welcome to File Handling.

        Output:
            File contents copied successfully.

            Contents of destination file (output.txt):
            Hello World!
            Welcome to File Handling.
*/

#include <stdio.h>
#include <stdlib.h>  // for exit()

int main()
{
    FILE *fp_1, *fp_2;
    char source[50], dest[50];
    char buffer[200];

    // Get file names from user
    printf("Enter the source file name: ");
    scanf(" %s", source);
    printf("Enter the destination file name: ");
    scanf(" %s", dest);

    // Open source file in read mode
    fp_1 = fopen(source, "r");
    if (fp_1 == NULL)
    {
        printf("Error: Cannot open source file '%s'.\n", source);
        return 1;
    }

    // Open destination file in write mode
    fp_2 = fopen(dest, "w");
    if (fp_2 == NULL)
    {
        printf("Error: Cannot open destination file '%s'.\n", dest);
        fclose(fp_1);  // close source before exiting
        return 1;
    }

    // Copy contents from source to destination
    while (fgets(buffer, sizeof(buffer), fp_1))
    {
        fputs(buffer, fp_2);
    }

    // Close source after copying
    fclose(fp_1);
    fclose(fp_2);

    printf("\nFile contents copied successfully.\n");

    // Reopen destination file in read mode for display
    fp_2 = fopen(dest, "r");
    if (fp_2 == NULL)
    {
        printf("Error: Cannot reopen destination file '%s'.\n", dest);
        return 1;
    }

    printf("\nContents of destination file (%s):\n", dest);
    while (fgets(buffer, sizeof(buffer), fp_2))
    {
        printf("%s", buffer);
    }
    printf("\n");

    fclose(fp_2);
    return 0;
}
