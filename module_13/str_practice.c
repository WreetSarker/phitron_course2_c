#include<stdio.h>
#include<string.h>

int main(){

    char ch[10];
    fgets(ch,10, stdin);

    printf("%s\n", ch);


    return 0;
}
