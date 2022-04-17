#include<stdio.h>

int main(){

    int marks;
    printf("Enter your marks: ");
    scanf("%d", &marks);
    if (marks >= 40){
        printf("You have passed!");
    }else{
        printf("Sorry! You have failed.");
    }

    return 0;
}
