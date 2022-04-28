#include<stdio.h>
#include<math.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int dif = a-b;
    int power = pow(32, dif);
    printf("%d\n", power);


    return 0;
}
