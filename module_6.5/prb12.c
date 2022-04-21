#include<stdio.h>

int main(){

    /*

    Write a C program to find all roots of a quadratic equation (ax^2 + bx + c = 0). Mention the number of roots and Then list all of them.
    Example

    Input

        Input a: 8

        Input b: -4

        Input c: -2

    Output

        There are two roos.

        Root1: 0.80

        Root2: -0.30
    */

    int a, b, c;
    printf("Input a: ");
    scanf("%d", &a);
    printf("Input b: ");
    scanf("%d", &b);
    printf("Input c: ");
    scanf("%d", &c);

    float root1, root2;
    float root_val = sqrt(b*b - 4*a*c);
    root1 = (float)(-b + root_val)/(2*a);
    root2 = (float)(-b - root_val)/(2*a);

    if(root1 != root2){
        printf("There are two roots.\n");
        printf("Root 1: %0.2lf\nRoot 2: %0.2lf\n", root1, root2);
    }else{
        printf("There is one root.\n");
        printf("Root is : %0.2lf\n", root1);
    }

    return 0;
}

