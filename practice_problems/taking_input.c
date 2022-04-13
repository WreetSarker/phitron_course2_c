#include<stdio.h>

int main(){
    int marks_english;
    int marks_math;

    scanf("%d", &marks_english);
    scanf("%d", &marks_math);

    printf("Your total marks is %d", marks_english + marks_math);

    return 0;

}
