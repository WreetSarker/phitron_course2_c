#include<stdio.h>
#include<string.h>


int main(){
    char binary[50];
    gets(binary);
    int len = strlen(binary);

    int idx = 0;
    for(int i = len-1; i>= 0; i--){
        binary[i] = '0';
        idx ++;
        if (idx ==3) break;
    }

    printf("%s\n", binary);

    return 0;
}


