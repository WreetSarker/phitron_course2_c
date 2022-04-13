#include<stdio.h>

int main(){

    /*

    Write a C program that takes a positive float number and outputs its integer part and real part.
        Expected Input/Output:

                Enter Number: 3.578

                Integer part: 3

                Real part: .578

    */

    float num;
    printf("Enter Number: ");
    scanf("%f", &num);
    printf("Integer part: %d\n", (int)(num/1));
    printf("Real part: %f\n", num - (int)(num/1));


    return 0;
}

