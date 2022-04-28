#include<stdio.h>

int main(){

    int t;
    scanf("%d", &t);
    for(int i = 1; i<=t; i++){
        int last=0;
        int val;
        int count = 0;
        scanf("%d", &val);
        for(int j =1; count<val; j++){
            if(((j%10==3) && (j%3 ==0)) || (j%3==0) ||(j%10==3)){
                continue;
            }else{
//                printf("j: %d\n", j);
                count++;
                last = j;
            }
        }
        printf("%d\n", last);

    }

    return 0;
}
