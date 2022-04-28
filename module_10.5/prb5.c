#include<stdio.h>

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    int max = a*6;
    int min = a*1;

    if (b <= max && b>=min){
        printf("Yes\n");
    }else{
        printf("No\n");
    }

    return 0;
}
