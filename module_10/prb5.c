#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);

    int n1 =1;
    int n2 = 1;
    int sum = 0;
    if(n == 1){
        printf("%d ",n1);
    }else if (n==2){
        printf("%d %d ", n1, n2);
    }else{
        printf("%d %d ", n1, n2);
        for(int i = 3; i<=n; i++){
            sum = n1 + n2;
            printf("%d ", sum);
            n1 = n2;
            n2 = sum;
    //        printf("n1: %d n2: %d\t", n1,n2);
    }
    }
    return 0;
}
