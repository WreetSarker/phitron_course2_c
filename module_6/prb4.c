#include<stdio.h>

int main(){
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    int rem_water = a-b;
    int transerable = c-rem_water > 0 ? c-rem_water : 0;
    printf("%d\n", transerable);



    return 0;
}
