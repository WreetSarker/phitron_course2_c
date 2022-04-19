#include<stdio.h>

int main() {

    int sum = 0;
    for(int i = 1; i <= 100; i++){
        sum += i;
    }
    printf("1+2+3+.....100 = %d\n", sum);


    sum = 0;
    for(int i = 1; i <= 29; i+=2){
        sum += i;
    }
    printf("1+3+5+...+29 = %d\n", sum);


    sum = 0;
    for(int i = 50; i >= 31; i-=1){
        sum += i;
    }
    printf("50 + 49 + 48 + 47+ ... + 31 = %d\n", sum);

    sum = 0;
    for(int i = 2; i <= 29; i+=3){
        sum += i;
    }
    printf("2 + 5 + 8 + 11 + 14+ ... +29 = %d\n", sum);


    sum = 0;
    for(int i = 100; i > 0; i--){
        sum += i;
    }
    printf("100 + 97 + 94 + 91 + ... +0 = %d\n", sum);


    return 0;
}
