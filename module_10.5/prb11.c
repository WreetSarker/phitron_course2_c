#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int count = 0;
    int s;
    for(int i = 1; i <= n; i++){
        scanf("%d", &s);
        if (s ==1){
            count ++;
        }
    }
    if (count == 0){
        printf("EASY\n");
    }else{
        printf("HARD\n");
    }


    return 0;
}
