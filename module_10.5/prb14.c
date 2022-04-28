#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int s;
    int count = 0;
    int sum = 0;


    for (int i = 1; i<=n; i++){
        scanf("%d", &s);
        if (s == -1){
            if(sum > 0){
                sum -=1;
            }else{
                count ++;
            }

        }else{
            sum +=s;
        }
    }

    printf("%d", count);

    return 0;
}
