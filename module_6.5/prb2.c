#include<stdio.h>

int main(){

    /*
    Write a C program that accepts two integers and prints true if either one is 5 or their sum or difference is 5.
    */
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if(a==5 || b ==5 || (a+b)==5 || (a-b)==5 || (b-a) == 5){
        printf("true\n");
    }


    return 0;
}

