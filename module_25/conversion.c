#include<stdio.h>
#include<string.h>

int convertDec(char str[]){
    int len = strlen(str);
    int sum = 0;
    int count = 0;
    int num;
    for(int i = len-1; i>= 0; i--){
        num = (int)(str[i]) - 48;
        sum += num * pow(2, count);
        count ++;
    }
    return sum;
}

int main(){
    printf("Enter binary number.");
    char str[128];
    gets(str);
    int dec = convertDec(str);
    printf("Decimal of %s is %d\n", str, dec);


    return 0;
}
