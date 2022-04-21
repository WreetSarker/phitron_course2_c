#include<stdio.h>

int main(){

    /*
    Write a C program that will first read an integer n, then read n integers. From those, it will find the sum of even integers.
    Example:

    Enter n: 5
    Input 5 integers: 2 3 5 6 7

    Sum of even integers = 8
    */

    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int sum = 0;
    int val;
    printf("Input 5 integers: ");
    for(int i = 1; i <= n; i++){
        scanf("%d", &val);
        if(val%2==0){
            sum += val;
        }
    }
    printf("Sum of even integers: %d\n",sum);

    return 0;
}

