#include<stdio.h>

int main(){

    int count = 0;
    for(int j = 100; j<=200; j++){
        count = 0;
        int i;
        for(i = 2; i <= j/2; i++){
            if(j%i == 0){
                count += 1;
            }

        }
        if (count == 0){
            printf("%d ", j);
        }
    }


    return 0;
}

