#include<stdio.h>
#include<string.h>

int main(){

    char ch[] = "Bangladesh";

    int sz = sizeof(ch)/sizeof(ch[0]);
    for(int i = 0; i <sz; i++){
        if(ch[i]>=97 && ch[i]<= 122){
            ch[i] = 'A' + (ch[i]- 'a');
        }
    }

    printf("%s\n", ch);
    for(int i = 0; i<sz; i++){
        printf("%c\n", ch[i]);
    }


    return 0;
}
