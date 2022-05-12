#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<math.h>

int main(){
    long long int n;
    scanf("%lld", &n);
    int k = 0;

    while (pow(2, k) <=n){
        k++;
    }
    if(k>=0){
        printf("%d\n", k-1);
    }else{
        printf("%d\n", 0);
    }





    return 0;
}
