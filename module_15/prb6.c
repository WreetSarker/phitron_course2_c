#include<stdio.h>
#include<string.h>

int main(){
    long long int n;
    scanf("%lld", &n);

    int count = 0;
    int rem;
    while(n>0){
        rem = n%10;
        if(rem==4 || rem == 7){
            count ++;
        }
        n = n/10;
    }

    if(count == 4 || count == 7){
        printf("YES");
    }else{
        printf("NO");
    }




    return 0;
}
