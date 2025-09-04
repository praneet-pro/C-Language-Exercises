/*
Program: LCM Function (Recursive)
Author: Praneet S
Description: This program finds the LCM of two numbers using recursion.
             It uses the Euclidean Algorithm: LCM(a, b) = a*b / GCD(b, a % b)
Example:
Input:
    Enter the first number: 12
    Enter the second number: 18
Output:
    The LCM of 12 and 18 is: 6
*/


#include <stdio.h>

//function to calculate gcd
int gcd(int n1, int n2)
{
    if(n2 == 0)
    {
         return n1;
    }
    else
    {
        return gcd(n2, n1 % n2);
    }
}

//function to calculate lcm
int lcm(int n1,int n2)
{
    return n1*n2 / gcd(n1,n2);
}

int main()
{
int num_1, num_2;

// Getting input from user
printf("Enter the first number: ");
scanf("%d", &num_1);
printf("Enter the second number: ");
scanf("%d", &num_2);

//Printing the output
printf("The LCM of %d and %d is: %d\n",num_1,num_2,lcm(num_1,num_2));
return 0;       //Program ends successfully
}
