#include<stdio.h>
#include<string.h>






int main(){
    char binary[50];
    gets(binary);
    int len = strlen(binary);

    for(int i =0; i<len; i++){
        if(binary[i] == '1'){
            binary[i] = '0';
            break;
        }
    }
    printf("%s\n", binary);


    return 0;
}

