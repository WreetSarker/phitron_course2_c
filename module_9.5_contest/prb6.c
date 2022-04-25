#include<stdio.h>

int main(){

    int n, k;
    scanf("%d %d", &n, &k);
    int rem;

    for(int i = 1; i <= k; i++){
        rem = n %10;
        if (rem == 0){
            n /= 10;
        }else{
            n --;
        }
    }
    printf("%d", n);


    return 0;
}
