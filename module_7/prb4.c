#include<stdio.h>

int main() {
    float a, b, mult;
    float sum = 0.0;
    int n;
    scanf("%d", &n);

    for(int i = 1; i <= n; i++){
        scanf("%f %f", &a, &b);
        mult = a*b;
        sum += mult;
    }

    printf("%.3f", sum);
    return 0;
}

