#include<stdio.h>

int main(){

    /*
    Write a C program to check whether a triangle is Equilateral, Isosceles or Scalene.
    Test Data :

        50 50 60

    Expected Output :

        This is an isosceles triangle.

    */

    int a, b, c;
    printf("Enter 3 sides of a triangle: ");
    scanf("%d %d %d", &a, &b, &c);

    if( a ==b && b ==c){
        printf("This is an equilateral triangle\n");
    }else if (a ==b || a==c || b ==c){
        printf("This is an isosceles triangle\n");
    }else{
        printf("This is a scalene.\n");
    }

    return 0;
}

