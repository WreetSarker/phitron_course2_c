#include<stdio.h>

int main() {

    int num;
    int sum = 0;
    int rem;
    scanf("%d", &num);
    while (num > 0){

        rem = num%10;
        num = num/10;
        sum += rem;
    }

    printf("%d", sum);
    return 0;
}
