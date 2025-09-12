/*
    Program: Employee Payroll Calculation using Structures
    Author: Praneet S
    Description:
        This program demonstrates the use of structures to store and calculate
        employee payroll details. Each employee has a name, ID, basic salary,
        HRA (House Rent Allowance), and DA (Dearness Allowance).
        The program calculates the Gross Salary for each employee and
        displays the details in a tabular format.

    Example:
    Input:
        Enter number of employees: 2

        Enter details for employee 1:
        Name: John
        ID: 101
        Basic Salary: 25000
        HRA: 5000
        DA: 3000

        Enter details for employee 2:
        Name: Alice
        ID: 102
        Basic Salary: 30000
        HRA: 6000
        DA: 4000

    Output:
        --- Employee Payroll ---
        Name       ID     Basic     HRA     DA     Gross
        John       101    25000.00  5000.00 3000.00 33000.00
        Alice      102    30000.00  6000.00 4000.00 40000.00
*/

#include<stdio.h>
#include<stdlib.h>

struct employee
{
    char name[50];
    int id;
    long int basic;
    long int hra;
    long int da;
};

int main()
{
    // getting the number of employees from user
    int n;
    printf("Enter number of employees: ");
    scanf("%d", &n);

    // dynamic allocation of memory for 'n' employees
    struct employee *emp = (struct employee*)malloc(n * sizeof(struct employee));

    // getting the employee details from the user
    for(int i = 0;i < n;i++)
    {
        printf("\nEnter details for employee %d:\n", i+1);
        printf("Name:");
        scanf(" %s", emp[i].name);
        printf("ID: ");
        scanf("%d", &emp[i].id);
        printf("Basic Salary: ");
        scanf("%ld", &emp[i].basic);
        printf("HRA: ");
        scanf("%ld", &emp[i].hra);
        printf("DA: ");
        scanf("%ld", &emp[i].da);
    }

    // printing the employees payroll
    long int gross = 0;
    printf("\n----Employee Payroll----\n");
    printf("Name\t  ID\t  Basic\t\tHRA\t  DA\t  Gross\n");
    for(int i = 0;i < n;i++)
    {
        gross = emp[i].basic + emp[i].hra + emp[i].da;
        printf("%-9s %-7d %-12ld %-10ld %-8ld %ld\n", emp[i].name, emp[i].id, emp[i].basic, emp[i].hra, emp[i].da, gross);
    }

    // freeing the dynamically allocated memery
    free(emp);
    return 0;
}
