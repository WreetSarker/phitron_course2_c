#include<stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int rem = a - (b*2);
    if (rem > 0){
        printf("%d\n", rem);
    }else{
        printf("%d\n", 0);
    }

    return 0;
}
