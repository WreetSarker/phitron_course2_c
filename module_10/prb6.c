#include<stdio.h>

int main(){
    float sum = 0;
    int n;
    scanf("%d", &n);
    for(float i = 1; i<=n; i++){
        printf("%d/%d+", 1, i);
        sum += (float)(1/i);
    }
    printf(" = %f", sum);

    return 0;
}
