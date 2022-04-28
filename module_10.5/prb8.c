#include<stdio.h>

int main(){
    int n, h;
    scanf("%d %d", &n, &h);

    int s;
    int sum = 0;
    for(int i=1; i<=n; i++){
        scanf("%d", &s);
        if (s<=h){
            sum+=1;
        }else{
            sum += 2;
        }
    }

    printf("%d\n",sum);
    return 0;
}
