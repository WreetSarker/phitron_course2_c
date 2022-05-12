#include<stdio.h>
#include<string.h>
#include<limits.h>

int main(){

    char s[20];
    gets(s);

    char b[] = "Hello,World!";
    if(strcmp(s, b) == 0){
        printf("AC\n");
    }else{
        printf("WA\n");
    }



    return 0;
}
