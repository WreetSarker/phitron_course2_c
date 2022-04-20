#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int not_advertise, advertise, cost;

    for(int i = 1; i <= n; i++){
        scanf("%d %d %d", &not_advertise, &advertise, &cost);
        if(advertise-cost > not_advertise){
            printf("advertise\n");
        }else if (advertise - cost == not_advertise){
            printf("does not matter\n");
        }else{
            printf("do not advertise\n");
        }
    }


    return 0;
}
