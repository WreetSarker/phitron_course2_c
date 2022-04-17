#include<stdio.h>

int main(){

    int num1, num2;
    char ch;
    printf("Enter your expression: ");
    scanf("%d %c %d", &num1, &ch, &num2);

    switch(ch){

        case '+':
            printf("%d %c %d = %d", num1, ch, num2, num1+num2);
            break;
        case '-':
            printf("%d %c %d = %d", num1, ch, num2, num1-num2);
            break;
        case '*':
            printf("%d %c %d = %d", num1, ch, num2, num1*num2);
            break;
        case '/':
            printf("%d %c %d = %d", num1, ch, num2, num1/num2);
            break;

    }

    return 0;
}
