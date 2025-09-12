/*
    Program: Enum weekdays
    Author: Praneet S

    Description:
        This program shows the basic usage of "enum" an user-defined data type that assigns meaningful names to integer constants.
        In this program I used enum to print the corresponding day of a week for the given number.

    Example:

        Input:
            Enter a number (1-7) representing the day of the week:
            1 - Sunday
            2 - Monday
            3 - Tuesday
            4 - Wednesday
            5 - Thursday
            6 - Friday
            7 - Saturday

            Enter your number: 4

        Output:
            Your Day: Wednesday
*/

#include<stdio.h>

// Define an enum to represent weekdays
enum days {
    Sunday = 1,
    Monday,
    Tuesday,
    Wednesday,
    Thursday,
    Friday,
    Saturday
};

int main()
{
    int choice;
    printf("Enter a number (1-7) representing the day of the week:\n1 - Sunday\n2 - Monday\n3 - Tuesday\n4 - Wednesday\n5 - Thursday\n6 - Friday\n7 - Saturday\n");

    // getting input from user
    printf("\nEnter your number: ");
    scanf("%d", &choice);
    printf("Your Day: ");

    // printing output based on the user choice
    switch(choice)
    {
        case Sunday:    printf("Sunday\n"); break;
        case Monday:    printf("Monday\n"); break;
        case Tuesday:   printf("Tuesday\n"); break;
        case Wednesday: printf("Wednesday\n"); break;
        case Thursday:  printf("Thursday\n"); break;
        case Friday:    printf("Friday\n"); break;
        case Saturday:  printf("Saturday\n"); break;
        default:        printf("Invalid input\n");
    }
    return 0;
}
