#include<stdio.h>

int main(){

    int value;
    printf("Enter your height in inch: \n");
    scanf("%d", &value);

    int inch, feet;
    feet = value/ 12;
    inch = value % 12;

    printf("Your height is %d feet %d inches.\n", feet, inch);

    return 0;
}
