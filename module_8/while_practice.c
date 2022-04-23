#include<stdio.h>

int main(){

    int money = 0;
    int target = 100;
    while (money < target){
        printf("Need more money. Provide more: ");
        int given;
        scanf("%d", &given);
        money+= given;
        printf("Current money: %d, need more! : %d\n", money, target-money);
    }

    return 0;
}
