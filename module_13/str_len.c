#include<stdio.h>
#include<string.h>

int main(){

    char ch[100] = "Hello World";
    int sz = sizeof(ch)/sizeof(ch[0]);
    int idx = 0;

    while(ch[idx] != '\0'){
        idx ++;
    }
    printf("Array len: %d\nString len: %d", sz, strlen(ch));


    return 0;
}
