#include<stdio.h>

int main(){
    int n1, n2;
    scanf("%d %d", &n1, &n2);
    int big = n1>n2 ? n1: n2;
    int small = n1 < n2 ? n1:n2;

    int rem = big;
    while (rem >0){
        rem = big%small;
        big = small;
        small = rem;
    }
    printf("%d\n", big);

    return 0;
}
