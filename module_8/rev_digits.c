#include<stdio.h>

int main() {

    int num;
    scanf("%d", &num);
    int sum = 0;
    int rem;
    int count = 0;

    while (num >0){
        rem = num%10;
        sum = sum*10 +rem;
        num /= 10;
    }
    printf("%d", sum);
    return 0;
}
