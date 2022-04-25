#include<stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);

    int sum = a+b;
    int mul = a*b;
    int sub = a-b;

    if (sum > mul && sum > sub){
        printf("%d", sum);
    }else if (mul > sum && mul > sub){
        printf("%d", mul);
    }else{
        printf("%d", sub);
    }


    return 0;
}
