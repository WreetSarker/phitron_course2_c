#include<stdio.h>
#include<string.h>

struct Number{
    int num1;
    int num2;
};

struct Number addTwo(struct Number number){
    number.num1 += 2;
    number.num2 += 2;
    return number;
};

int main(){

    struct Number num = {1, 3};
    struct Number newNumber = addTwo(num);
    printf("Num1: %d\nNum2: %d\n", newNumber.num1, newNumber.num2);


    return 0;
}

