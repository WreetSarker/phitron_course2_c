#include<stdio.h>

int main(){
    int x, n;
    scanf("%d", &x);
    scanf("%d", &n);

    int total = 0;
    int monthly_usage;
    for(int i = 1; i <= n; i++){
        scanf("%d", &monthly_usage);
        total += (x-monthly_usage);
    }
    printf("%d", total+x);


    return 0;
}
