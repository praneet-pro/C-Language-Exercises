/*
    Program: Delivery System
    Author: Praneet S

    Description:
        This program demonstrates the use of enum to simulate a delivery tracking system
        based on the current delivery status chosen by user.

    Example:
        Input:
            Enter the delivery status:
            1 - Ordered
            2 - Shipped
            3 - Out for Delivery
            4 - Delivered
        Enter your choice: 3

        Output:
            Delivery Status: Out for Delivery
            Message: Your package will arrive soon!
*/

#include<stdio.h>

// define an enum to represent to delivery status
enum status
{
    Ordered = 1,
    Shipped,
    Out_for_Delivery,
    Delivered
};

int main()
{
    // getting the users status as input
    int choice;
    printf("Enter the delivery status:\n1 - Ordered\n2 - Shipped\n3 - Out for Delivery\n4 - Delivered\n");
    printf("Enter the delivery status: ");
    scanf("%d", &choice);
    printf("\nDelivery Status: ");

    // printing the delivery status based on the users choice
    switch(choice)
    {
        case Ordered: printf("Ordered\nYour order has been placed successfully\n");   break;
        case Shipped: printf("Shipped\nYour order has been shipped and is on the way\n");   break;
        case Out_for_Delivery: printf("Out for Delivery\nYour package will arrive soon!");  break;
        case Delivered: printf("Delivered\nYour order has been delivered\nThank you for shopping!");    break;
        default: printf("Enter a valid number\n");
    }
    return 0;
}

