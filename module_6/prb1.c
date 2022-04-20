#include<stdio.h>

int main(){

    int cs;
    scanf("%d", &cs);
    int num1, num2;

    for(int i = 1; i <= cs; i++){
        scanf("%d %d", &num1, &num2);
        printf("Case %d: %d\n",i, num1+num2);
    }


    return 0;
}
