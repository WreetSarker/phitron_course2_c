#include<stdio.h>
#include<string.h>
#include<limits.h>

int main(){

    char s[100], t[100];
    scanf("%s %s", s, t);

    if(strcmp(s, t) < 0){
        printf("Yes\n");
    }else{
        printf("No\n");
    }



    return 0;
}
