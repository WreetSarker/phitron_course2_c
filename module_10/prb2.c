#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int rem;
    int rev = 0;
    int fin = n;
    while (n > 0){
        rem = n%10;
        rev = rev*10 + rem;
        n = n/10;
    }

    printf("Reverse of %d is %d", fin, rev);
    return 0;
}
