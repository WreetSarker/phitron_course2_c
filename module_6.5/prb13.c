#include<stdio.h>

int main(){

    /*
    Write a C program to input sides of a triangle and check whether triangle is valid or not using if else.
    Example

    Input

        Input first side: 7

        Input second side: 10

        Input third side: 5

    Output

        Triangle is valid

    */

    int a, b, c;
    printf("Input first side: ");
    scanf("%d", &a);

    printf("Input second side: ");
    scanf("%d", &b);

    printf("Input third side: ");
    scanf("%d", &c);

    if ((a+b) > c && (b+c) > a && (c+a)> b){
        printf("Triangle is valid.\n");
    }else{
        printf("Invalid triangle.\n");
    }

    return 0;
}

