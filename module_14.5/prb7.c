#include<stdio.h>
#include<string.h>
#include<limits.h>
#include<ctype.h>


int main(){
    char a[101], b[101];
    scanf("%d", &a);
    scanf("%d", &b);

    for(int i = 0; i < strlen(a); i++){
        a[i] = tolower(a[i]);
    }
    for(int i = 0; i < strlen(b); i++){
        b[i] = tolower(b[i]);
    }

    if(strcmp(a, b) <0){
        printf("-1");
    }else if(strcmp(a, b) > 0){
        printf("1");
    }else{
        printf("0");
    }




    return 0;
}
