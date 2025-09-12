/*
    Program: Typedef Demonstration with Car Structure
    Author: Praneet S
    Description:
        This program shows the use of the 'typedef' keyword in C.
        The 'typedef' keyword allows you to create an alias (alternative name)
        for a data type. Here, we create a new type name 'Car' that is
        an alias for a structure containing details such as model, year,
        and price. This improves readability and makes the code easier
        to maintain.

    Example:
    Input:
        Enter number of cars: 2

        Enter details for car 1:
        Model: Tesla
        Year: 2024
        Price: 5000000.50

        Enter details for car 2:
        Model: BMW
        Year: 2021
        Price: 1000000.00

    Output:
        --- Car Records ---
        Model       Year   Price
        Tesla       2022   5000000.50
        BMW         2021   1000000.00
*/

#include<stdio.h>
#include<stdlib.h>

// Defining structure with typedef
typedef struct car
{
    char model[50];
    int year;
    double price;
} Car;     // alias name for structure is Car

int main()
{
    int n;
    printf("Enter number of cars: ");
    scanf("%d", &n);

    // Dynamic memory allocation using typedef alias
    Car *cars = (Car*)malloc(n * sizeof(Car));

    // Input details for cars
    for(int i = 0; i < n; i++)
    {
        printf("\nEnter details for car %d:\n", i+1);
        printf("Model: ");
        scanf(" %s", cars[i].model);
        printf("Year: ");
        scanf("%d", &cars[i].year);
        printf("Price: ");
        scanf("%lf", &cars[i].price);
    }

    // Display car records
    printf("\n--- Car Records ---\n");
    printf("Model\t\t Year\t Price\n");
    for(int i = 0; i < n; i++)
    {
        printf("%-12s %-6d %.2lf\n", cars[i].model, cars[i].year, cars[i].price);
    }

    free(cars); // Free allocated memory
    return 0;
}
