#include<stdio.h>

int main(){

    int n, p;
    scanf("%d %d", &n, &p);
    int count = 0;
    int num;
    for(int i=1; i<=n; i++){
        scanf("%d", &num);
        if (num < p){
            count ++;
        }
    }
    printf("%d\n", count);

    return 0;
}
