#include<stdio.h>

int main() {

    int a, b;
    char ch;
    scanf("%d %c %d", &a, &ch, &b);

    switch(ch){
        case '+':
            printf("%d %c %d = %d", a, ch, b, a+b);
            break;
        case '-':
            printf("%d %c %d = %d", a, ch, b, a-b);
            break;
        case '*':
            printf("%d %c %d = %d", a, ch, b, a*b);
            break;
        case '/':
            if(b != 0){
                printf("%d %c %d = %d", a, ch, b, a/b);
            }else{
                printf("Can't divide by 0!");
            }
            break;
        case '%':
            printf("%d %c %d = %d", a, ch, b, a%b);
            break;
        default:
            printf("Unknown operation.");



    }


    return 0;
}

