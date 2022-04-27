#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int fact = 1;
    int fin = n;
    while (n>=1){
        fact *= n;
        n -=1;
    }

    printf("Factorial of %d is %d\n",fin, fact);
    return 0;
}
