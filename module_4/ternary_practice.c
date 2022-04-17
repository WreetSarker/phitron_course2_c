#include<stdio.h>

int main() {

    int num;
    printf("Enter your number: ");
    scanf("%d", &num);

    int abs = num >= 0 ? num : -num;
    printf("The absolute value of %d is %d", num, abs);


    return 0;
}
