#include<stdio.h>

int main(){

    int n, s;
    scanf("%d", &n);

    float sum = 0;
    for(int i = 1; i<=n; i++ ){
        scanf("%d", &s);
        if (s > 0){
            sum += s;

        }
    }
    float avg = (float) sum/n;
    printf("%f\n", avg);

    return 0;
}
