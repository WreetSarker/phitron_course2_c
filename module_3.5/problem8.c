#include<stdio.h>

int main(){

    /*

    Write a C program to input temperature in degree Fahrenheit and convert it to degree Centigrade. Example
    Input

        Temperature in fahrenheit = 205

    Output

        Temperature in celsius = 96.11 C

    */

    float c, f;
    printf("Enter temperature in fahrenheit = ");
    scanf("%f", &f);
    c = (f-32) * (float)(5.0/9.0);
    printf("Temperature in celsius = %0.2f C", c);

    return 0;
}

