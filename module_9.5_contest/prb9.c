#include<stdio.h>

int main(){

    int n, grade;
    int next_multiple;
    scanf("%d", &n);
    for(int i = 1; i <= n; i++ ){
        scanf("%d", &grade);
        next_multiple = grade / 5;
        next_multiple = (next_multiple + 1) *5;
        if (grade < 38){
            printf("%d\n", grade);
        }else if (next_multiple - grade < 3){
            printf("%d\n", next_multiple);
        }else{
            printf("%d\n", grade);
        }
    }


    return 0;
}
