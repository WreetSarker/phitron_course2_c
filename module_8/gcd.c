#include<stdio.h>

int main(){

    int num1, num2;
    scanf("%d %d", &num1, &num2);

    int small = num1 < num2 ? num1:num2;
    int big = num1 > num2 ? num1:num2;

    int rem = big;
    while ( rem > 0){
        rem = big % small;
        big = small;
        small = rem;
//        printf("big: %d, small: %d, rem: %d\n", big, small, rem);
    }
    printf("%d\n", big);

    return 0;
}
