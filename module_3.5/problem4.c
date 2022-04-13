#include<stdio.h>

int main(){

    /*

    Write a C program to input principle, time and rate (P, T, R) from the user and find Simple Interest and principal plus interest.
    Example

        Input

        Enter principle: 1200

        Enter time: 2

        Enter rate: 5.4

    Output

        Simple Interest = 129.600006

    Principal + Interest = 1329.6

    */

    int p, t;
    double r;
    printf("Enter principle: ");
    scanf("%d", &p);
    printf("Enter time: ");
    scanf("%d", &t);
    printf("Enter rate: ");
    scanf("%lf", &r);

    double simple_interest = (double)((p*t*r)/100);
    printf("Simple Interest = %lf\n", simple_interest);
    printf("Principle + Interest = %0.1lf", simple_interest + p);


    return 0;
}

