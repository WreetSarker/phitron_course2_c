#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

int main(){
    srand(time(0));
    int r = rand()%100+1;

    while(true){
        printf("Enter your guess: ");
        int guess;
        scanf("%d", &guess);
        if (guess == r) {
            printf("You guessed it correct!\n");
            break;
        }else if (guess < r){
            printf("Your guess is low!\n");
        }else{
            printf("Your guess is high!\n");
        }

    }


    return 0;
}
