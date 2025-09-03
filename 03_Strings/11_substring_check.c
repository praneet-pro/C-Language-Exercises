/*
    Program: String substring
    Author: Praneet S
    Description: This program gets two strings and checks whether the second string is present in first string.
    Example:
    Input:
        Enter main string: Programming
        Enter sub string: gram

    Output:
       Sub string found at position 4
*/

#include <stdio.h>

int main()
{
//Declaration of variable to store values
char str_1[100], str_2[50];
int i, j, start, found = 0;

//Getting input from user
printf("Enter main string: ");
scanf("%s", str_1);
printf("Enter sub string: ");
scanf("%s", str_2);

//checking whether substring is in main string
for (i = 0; str_1[i] != '\0'; i++) {
    start = i;
    j = 0;

    // Check if str_2 matches starting from str_1[i]
    while (str_1[i + j] != '\0' && str_2[j] != '\0' && str_1[i + j] == str_2[j]) {
            j++;
        }

        // If we reached end of str_2, match found
        if (str_2[j] == '\0') {
            printf("Substring found at position %d\n", start + 1);
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("Substring not found\n");
    }

    return 0;       //Program ends successfully
}
