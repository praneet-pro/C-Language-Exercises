/*
    Program: Student Marks File
    Author: Praneet S

    Description:
        This program demonstrates how to use file handling in C
        to store and retrieve student details such as name, roll number,
        and marks. The program writes multiple student records into a file
        and then reads back the contents to display them. This showcases
        writing structured data to a file and reading it line by line.

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
            Marks: 92.0

        Output:
            --- Student Records from File ---
            Name: John    Roll: 101    Marks: 87.50
            Name: Alice   Roll: 102    Marks: 92.00
*/

#include<stdio.h>
#include<stdlib.h>

// structure to store student data
struct student
{
    char name[50];
    int roll;
    float marks;
};

int main()
{
    // getting the number of students from users
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);

    // dynamic memory allocation for n students
    struct student *s = (struct student*)malloc(n * sizeof(struct student));
    if (s == NULL)
    {
        printf("Memory not allocated\n");
        return 1;
    }

    // getting student data from user
    for(int i = 0;i < n;i++)
    {
        printf("\nEnter details of student %d:\n", i + 1);
        printf("Name: ");
        scanf(" %[^\n]", s[i].name);
        printf("Roll: ");
        scanf("%d", &s[i].roll);
        printf("Marks: ");
        scanf("%f", &s[i].marks);
    }

    FILE* fp;

    // open file in write mode
    fp = fopen("students.txt", "w");
    if (!fp)
    {
        printf("Error opening file!\n");
        return 1;
    }

    // writing the data into file
    fprintf(fp, "\n---Student Records from File---\n");
    for(int i = 0;i < n;i++)
    {
        fprintf(fp, "Name: %-12s Roll: %-8d Marks: %.2f\n", s[i].name, s[i].roll, s[i].marks);
    }
    fclose(fp);

    // open file in read mode
    char buffer[200];
    fp = fopen("students.txt", "r");
    if (!fp)
    {
        printf("Error opening file!\n");
        return 1;
    }

    while(fgets(buffer, sizeof(buffer), fp))
    {
        printf("%s", buffer);
    }
    fclose(fp);
    free(s);
    return 0;
}
