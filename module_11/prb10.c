#include<stdio.h>

int main(){

    int x;
    scanf("%d", &x);
    int c = x%10;
    x = x/10;
    int b = x%10;
    x = x/10;
    int a = x;

    int abc = a*100 + b*10 +c;
    int bca = b*100 + c*10 +a;
    int cab = c*100 + a*10 +b;

    printf("%d\n", abc+bca+cab);

    return 0;
}
