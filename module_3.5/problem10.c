#include<stdio.h>

int main(){

    /*

    Write a C program that accepts two item’s weight (floating points' values ) and number of purchase (floating points' values) and calculate the average value of the items.
        Expected Input/Output:

            Weight - Item1: 15

            No. of item1: 5

            Weight - Item2: 25

            No. of item2: 4

        Expected Output:

            Average Value = 19.444444

    */

    float w1, n1, w2, n2;


    printf("Weight - Item 1: ");
    scanf("%f", &w1);
    printf("No. of item 1: ");
    scanf("%f", &n1);

    printf("Weight - Item 2: ");
    scanf("%f", &w2);
    printf("No. of item 2: ");
    scanf("%f", &n2);

    float total = w1*n1 + w2*n2;
    float average = total/(n1+n2);

    printf("Average Value = %f", average);

    return 0;
}

