#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int a[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &a[i]);
    }

    int *ptr = a;
    int prod = 1;
    for(int i = 0; i < n; i++){
        prod *= *ptr;
        *ptr++;
    }
    printf("%d\n", prod);


    return 0;
}
