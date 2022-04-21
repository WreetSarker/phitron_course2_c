#include<stdio.h>

int main(){

    /*
    Write a C program to check whether a given non-negative number is a multiple of 3 or 7, but not both.
    For example: inputs 7, 3, 6, 14 should output yes. Inputting 21, 42 should output no.
    */
    int a;
    printf("Enter number: ");
    scanf("%d", &a);

    if(((a%3)==0 || (a%7)==0) && !((a%3)==0 && (a%7)==0)){
        printf("yes\n");
    }else{
        printf("no\n");
    }

    return 0;
}

