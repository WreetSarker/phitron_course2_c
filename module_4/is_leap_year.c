#include<stdio.h>

int main(){

    int year;
    printf("Enter your year: ");
    scanf("%d", &year);

    if (year % 4 != 0){
        printf("Not a leap year!");
    }else {
        if ((year % 100 == 0 ) && (year %400 != 0)){
            printf("Not a leap year!");
        }else{
            printf("A leap year!");
        }

    }


    return 0;
}
