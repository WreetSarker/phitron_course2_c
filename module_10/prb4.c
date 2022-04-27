#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int fin = n;
    int rem, sum;

    while (n >= 1){
        rem = n%10;
        sum += rem;
        n /=10;
    }
    printf("The sum of digits of %d is %d\n", fin,sum);

    return 0;
}
