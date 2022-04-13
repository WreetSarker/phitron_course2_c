#include<stdio.h>

int main(){

    /*
    Write a C program to input two numbers and perform all arithmetic operations to find sum, difference, product, quotient and modulus of two given numbers.
    Example

    Input

        First number: 10

        Second number: 5

    Output

        Sum = 15

        Difference = 5

        Product = 50

        Quotient = 2

        Modulus = 0

    */
    int num1, num2;
    printf("First number: ");
    scanf("%d", &num1);
    printf("Second number: ");
    scanf("%d", &num2);

    printf("Sum = %d\nDifference = %d\nProduct = %d\nQuotient = %d\nModulus = %d", num1+num2, num1-num2, num1*num2, num1/num2, num1%num2);

    return 0;
}

