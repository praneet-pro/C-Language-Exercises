/*
    Program: Complex Number Operations using Structures
    Author: Praneet S
    Description:
        This program demonstrates the use of structures to represent complex numbers
        and perform basic operations such as addition and subtraction.
        A complex number consists of a real part and an imaginary part.
        The program takes two complex numbers as input and displays their sum and difference.

    Example:
    Input:
        Enter first complex number:
        Real: 3
        Imaginary: 2

        Enter second complex number:
        Real: 1
        Imaginary: 7

    Output:
        --- Complex Number Operations ---
        First Number: 3.0 + 2.0i
        Second Number: 1.0 + 7.0i
        Sum: 4.0 + 9.0i
        Difference: 2.0 - 5.0i
*/

#include<stdio.h>
#include<math.h>

struct complex
{
    float real;
    float imag;
};

// function to print complex number
void printcomplex(float real, float imag)
{
    if(imag > 0)
    {
        printf("%.1f + %.1fi\n", real, imag);
    }
    else if(imag < 0)
    {
        printf("%.1f - %.1fi\n", real, fabs(imag));
    }
    else
    {
        printf("%.1f\n", real);
    }
}

int main()
{
    // getting complex number from user
    struct complex z1, z2;
    printf("Enter first complex number:\n");
    printf("Real: ");
    scanf("%f", &z1.real);
    printf("Imaginary: ");
    scanf("%f", &z1.imag);
    printf("\nEnter second complex number:\n");
    printf("Real: ");
    scanf("%f", &z2.real);
    printf("Imaginary: ");
    scanf("%f", &z2.imag);

    // calculating the sum and difference of real and imaginary part
    float rsum = z1.real + z2.real;
    float rdiff = z1.real - z2.real;
    float isum = z1.imag + z2.imag;
    float idiff = z1.imag - z2.imag;

    // printing the output
    printf("\n--- Complex Number Operations ---\n");
    printf("First Number: ");
    printcomplex(z1.real, z1.imag);
    printf("Second Number: ");
    printcomplex(z2.real, z2.imag);
    printf("Sum: ");
     printcomplex(rsum, isum);
    printf("Difference: ");
    printcomplex(rdiff, idiff);

    return 0;       // program ends successfully
}
