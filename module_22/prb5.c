#include<stdio.h>
#include<string.h>


int main(){
    char str[] = "Hello";
    char * pos = strchr(str, 'l');
    printf("%d", pos);



    return 0;
}
