#include<stdio.h>

int main(){

    int n, k, a;
    scanf("%d %d %d", &n, &k, &a);
    int pointer = a;

    while (k > 1){
        if (pointer == n){
            pointer = 1;
            k--;

        }else{
        pointer ++;
        k --;
        }

    }

    printf("%d\n", pointer);


    return 0;
}
