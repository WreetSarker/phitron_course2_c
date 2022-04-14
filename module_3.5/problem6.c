#include<stdio.h>

int main(){

    /*

    Write a C program that accepts an employee's total worked hours of a month and the amount he received per hour. Print salary (with two decimal places) of a particular month.
    Test Data :

        Input the working hrs: 8

        Salary amount/hr: 15000

    Expected Output:

        Salary = 120000.00

    */

    int h;
    float s;

    printf("Input the working hrs: ");
    scanf("%d", &h);
    printf("Salary amount/hr : ");
    scanf("%f", &s);
    printf("Salary = %0.2f", (float)(h*s));


    return 0;
}

