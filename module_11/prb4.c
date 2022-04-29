#include<stdio.h>

int main(){
    int n,a,d;
    scanf("%d", &n);
    char c[n];
    scanf("%s", &c);
    for(int i = 0; i <n; i++){
        if(c[i] =='A'){
            a++;
        }else{
            d++;
        }
    }

    if(a>d){
        printf("Anton\n");
    }else if(d > a){
        printf("Danik\n");
    }else{
        printf("Friendship");
    }

    return 0;
}
