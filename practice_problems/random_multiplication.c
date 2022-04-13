#include<stdio.h>

int main(){

    int number;
    printf("Please enter the number of your choice: \n");
    scanf("%d", &number);

    for(int i = 1; i < 21; i++){
        printf("%d * %d = %d\n", number, i, number*i);
    }

    int num1, num2;

    printf("Enter two more numbers: \n");
    scanf("%d %d", &num1, &num2);

    printf("The remainder and quotient when %d is divided by %d is: %d and %d respectively.\n", num1, num2, num1%num2, num1/num2);
    double n = 22/7;
    printf("%lf", n);

    return 0;
}
