#include<stdio.h>

int main(){
    char str[] = "Hello";
    char *pl = strchr(str, 'l');
    char *first = str;

    printf("%d\n", pl-first);


    return 0;
}
