#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    if (n < 126){
        printf("%d", 4);
    }else if(n<212){
        printf("%d", 6);
    }else{
        printf("%d", 8);
    }

    return 0;
}
