#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int cen = n/100;
    int rem = n%100;

    if (rem == 0){
        printf("%d\n", cen);
    }else{
        printf("%d\n", cen+1);
    }


    return 0;
}
