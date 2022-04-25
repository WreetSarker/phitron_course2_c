#include<stdio.h>

int main(){

    int a, b;
    scanf("%d %d", &a, &b);

    int can_follow = 2*a + 100;

    int remain = can_follow - b;

    printf("%d\n", remain);

    return 0;
}
