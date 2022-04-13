/**
Write a program to determine the perimeter and area of a circle.
The program will ask the user for a radius and print the result
of area and perimeter of the circle.
**/

#include<stdio.h>

int main(){

    int radius;
    printf("Please enter the radius of your circle: \n");
    scanf("%d", &radius);

    double pi = 3.14;
    printf("Perimeter: %lf\nArea: %lf", (double)radius*pi*2, (double)radius*radius*pi);

}
