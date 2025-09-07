/*
    Program: Structure with Pointer Demonstration
    Author: Praneet S
    Description: This program demonstrates how to use pointers with structures.
                 A structure is created to store student details, and a pointer
                 to the structure is used to access and display the members.

    Example:
    Input:
        Enter student name: John
        Enter roll number: 101
        Enter marks: 89.5

    Output:
        --- Student Details ---
        Name: John
        Roll Number: 101
        Marks: 89.50
*/

#include<stdio.h>

// structure definition
struct student
{
    char name[50];
    int rollno;
    float marks;
};

int main()
{
    // declare structure variable and pointer
    struct student s1;
    struct student *ptr;

    // assign address of s1 to pointer
    ptr = &s1;

    // get student details using pointer
    printf("Enter student name: ");
    scanf("%s", ptr->name);   // no & needed because array is already an address

    printf("Enter roll number: ");
    scanf("%d", &ptr->rollno);

    printf("Enter marks: ");
    scanf("%f", &ptr->marks);

    // display details using pointer
    printf("\n--- Student Details ---\n");
    printf("Name: %s\n", ptr->name);
    printf("Roll Number: %d\n", ptr->rollno);
    printf("Marks: %.2f\n", ptr->marks);

    return 0;
}
