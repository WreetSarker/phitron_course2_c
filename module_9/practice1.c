#include<stdio.h>
#include<limits.h>
#include<math.h>

int main(){
    long long int x = LONG_MAX;
    printf("%lld\n", x);

    float temp = 1e20;
    double temp2 = 1e20;

    printf("%f\n", temp);
    printf("%lf\n", temp2);
    int num;
    scanf("%d", &num);
    int square = pow(num, 2);

    printf("The square of your number is: %d\n", square);


    return 0;
}
