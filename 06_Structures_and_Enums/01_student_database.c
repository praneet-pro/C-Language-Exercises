/*
    Program: Student Database using Structures
    Author: Praneet S
    Description:
        This program demonstrates the use of structures to store and manage
        student information such as name, roll number, and marks.
        An array of structures is used to handle multiple students.
        The program displays the entered student details in a tabular format.

    Example:
    Input:
        Enter number of students: 2

        Enter details for student 1:
        Name: John
        Roll Number: 101
        Marks: 87.5

        Enter details for student 2:
        Name: Alice
        Roll Number: 102
        Marks: 92

    Output:
        --- Student Database ---
        Name    Roll Number   Marks
        John    101           87.50
        Alice   102           92.00
*/

#include<stdio.h>
#include<stdlib.h>

struct student
{
    char name[50];
    long int roll;
    float marks;
};

int main()
{
    // getting the number of students from user
    int n;
    printf("Enter the number of students: ");
    scanf("%d", &n);

    // dynamic memory allocation for structure student
    struct student *s = (struct student *)malloc(n * sizeof(struct student));

    // getting the details of students from user
    for(int i = 0;i < n;i++)
    {
        printf("\nEnter the details for student %d:\n", i+1);
        printf("Name: ");
        scanf(" %s", s[i].name);
        printf("Roll Number: ");
        scanf("%ld", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    // printing the student details
    printf("\n---Student Database---\n");
    printf("Name\t Roll Number\t Marks\n");
    for(int i = 0;i < n;i++)
    {
        printf("%-10s %-12ld %.2f\n", s[i].name, s[i].roll, s[i].marks);
    }

    // freeing the dynamically allocated memory
    free(s);
    return 0;
}
