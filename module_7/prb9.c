#include<stdio.h>

int main() {

    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int sum1, sum2, sum3;
    sum1 = a+b;
    sum2 = a+c;
    sum3 = b+c;

    if (sum1 == sum2 && sum2 == sum3){
        printf("%d", sum1);
    }else if (sum1 < sum2 && sum1 < sum3){
        printf("%d", sum1);
    }else if (sum2 < sum1 && sum2 < sum3){
        printf("%d", sum2);
    }else if(sum3<sum1 && sum3 < sum2){
        printf("%d", sum3);
    }

    return 0;
}

