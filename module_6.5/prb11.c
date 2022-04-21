#include<stdio.h>

int main(){

    /*
    Write a program in C that takes two inputs x and y and prints all numbers that are multiples of x but divisors of y.  If there are none, print no such integers.
    Test Data :

        5 20

    Expected Output :

        5 10 20


    Test Data :

        6 20

    Expected Output :

        No such integers

    */

    int a, b;
    scanf("%d %d", &a, &b);
    int count = 0;
    for(int i = 1; i <= b; i++){
        if(b % (a*i) == 0){
            printf("%d ", a*i);
            count +=1;
        }
    }
    if (count == 0){
        printf("No such integers\n");
    }

    return 0;
}

