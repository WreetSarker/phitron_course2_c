#include<stdio.h>

int main(){

    int n;
    int count = 0;
    scanf("%d", &n);
    for(int i = 1; i <= n/2; i++){
        if (i == 1){
            continue;
        }else if(n == 2){
            printf("Prime\n");
            break;
        }else if(n %i == 0){
            printf("Not a prime.\n");
            count += 1;
            break;
        }
    }
    if (count == 0){
        printf("Prime\n");
    }
    return 0;
}
