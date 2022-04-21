#include<stdio.h>

int main(){

    /*
    Write a C program that prints all even numbers between 1 and n (inclusive), where n is taken as input.
    */


    int n;
    printf("Enter final number: ");
    scanf("%d", &n);
    for(int i = 0; i<=n; i+=2){
        printf("%d ",i);
    }


    return 0;
}
