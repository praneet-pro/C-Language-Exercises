/*
    Program: Menu-driven math operations using functions
    Author: Praneet S
    Description: This program performs different mathematical operations
                 (Addition, Subtraction, Multiplication, Division, Factorial)
                 using functions. The user selects the operation from a menu.

    Example:
    Input:
        ---Menu---
        1. Addition
        2. Subtraction
        3. Multiplication
        4. Division
        5. Factorial
        6. Exit
        Enter your choice: 1
        Enter two numbers: 10 20

    Output:
        Result: 30
*/

#include<stdio.h>

int add(int a, int b)
{
    return a + b;       //Addition
}

int sub(int a, int b)
{
    return a - b;       //Subtraction
}

int mul(int a, int b)
{
    return a * b;       //Multiplication
}

float div(float a, float b)
{
    return a / b;       //Division
}

int fact(int a)
{
    if(a == 0 || a == 1)
        return 1;
    else
        return a * fact(a - 1);     //Factorial
}

int main()
{
    int a, b;
    int result;
    float fresult;
while(1)        //infinite loop
{
    printf("\n---Menu---\n1. Addition\n2. Subtraction\n3. Multiplication\n4. Division\n5. Factorial\n6. Exit\n");
    int choice;
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 6)
    {
        printf("\nExiting Program...\n");
        exit(1);
    }

    switch(choice)
    {
        case 1:
        {
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            result = add(a, b);
            printf("Result: %d\n", result);
            break;
        }
        case 2:
        {
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            result = sub(a, b);
            printf("Result: %d\n", result);
            break;
        }
        case 3:
        {
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            result = mul(a, b);
            printf("Result: %d\n", result);
            break;
        }
        case 4:
        {
            float c, d;
            printf("Enter two numbers: ");
            scanf("%f %f", &c, &d);
            fresult = div(c, d);
            printf("Result: %.2f\n", fresult);
            break;
        }
        case 5:
        {
            printf("Enter a number: ");
            scanf("%d", &a);
            result = fact(a);
            printf("Result: %d\n", result);
            break;
        }
        default:
        {
            printf("Enter a valid number\n");
        }
     }
    }
    return 0;       //Program ends successfully
}
