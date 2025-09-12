/*
    Program: Nested Structure Demonstration (Book - Publisher Example)
    Author: Praneet S
    Description:
        This program demonstrates the use of nested structures in C.
        Each "Book" structure contains another structure "Publisher"
        that stores the publisher's details such as name and city.
        The program takes input for two books and displays their
        complete details in a structured tabular format.

    Example:
    Input:
        Enter details for book 1:
        Title: C Programming
        Author: Dennis Ritchie
        Price: 499.50
        Publisher Name: PHI Learning
        Publisher City: New Delhi

        Enter details for book 2:
        Title: Algorithms Unlocked
        Author: Thomas Cormen
        Price: 650.00
        Publisher Name: MIT Press
        Publisher City: Cambridge

    Output:
        --- Book Database ---
        Title                Author           Price     Publisher        City
        C Programming        Dennis Ritchie   499.50    PHI Learning     New Delhi
        Algorithms Unlocked  Thomas Cormen    650.00    MIT Press        Cambridge
*/

#include <stdio.h>

struct publisher {
    char name[50];
    char city[50];
};

struct book {
    char title[50];
    char author[50];
    float price;
    struct publisher pub;  // Nested structure
};

int main() {
    struct book b1, b2;

    // Getting details of book 1
    printf("Enter details for book 1:\n");
    printf("Title: ");
    scanf(" %[^\n]", b1.title);
    printf("Author: ");
    scanf(" %[^\n]", b1.author);
    printf("Price: ");
    scanf("%f", &b1.price);
    printf("Publisher Name: ");
    scanf(" %[^\n]", b1.pub.name);
    printf("Publisher City: ");
    scanf(" %[^\n]", b1.pub.city);

    // Getting details of book 2
    printf("\nEnter details for book 2:\n");
    printf("Title: ");
    scanf(" %[^\n]", b2.title);
    printf("Author: ");
    scanf(" %[^\n]", b2.author);
    printf("Price: ");
    scanf("%f", &b2.price);
    printf("Publisher Name: ");
    scanf(" %[^\n]", b2.pub.name);
    printf("Publisher City: ");
    scanf(" %[^\n]", b2.pub.city);

    // Display book database
    printf("\n--- Book Database ---\n");
    printf("%-20s %-15s %-8s %-15s %-15s\n",
           "Title", "Author", "Price", "Publisher", "City");
    printf("%-20s %-15s %-8.2f %-15s %-15s\n",
           b1.title, b1.author, b1.price, b1.pub.name, b1.pub.city);
    printf("%-20s %-15s %-8.2f %-15s %-15s\n",
           b2.title, b2.author, b2.price, b2.pub.name, b2.pub.city);

    return 0;
}
