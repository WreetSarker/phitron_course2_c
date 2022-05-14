#include<stdio.h>

int printGcd(int a, int b){

    int small = a>b ? b:a;
    int big = a>b? a:b;

    int rem = big;

    while (rem >0){
        rem =  big%small;
        big = small;
        small = rem;
    }

    return big;

}


int main(){

    int x, y;
    scanf("%d %d", &x, &y);

    int gcd = printGcd(x, y);


    return 0;
}
