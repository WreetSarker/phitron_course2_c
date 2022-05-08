#include<stdio.h>
#include<string.h>

int main(){

    char str1[] ="Hello World !";
    char str2[10];
    int len = strlen(str1);

//    for(int i = 0; i < len; i++){
//        str2[i] = str1[i];
//    }
//    str2[len] = '\0';

    strncpy(str2, str1,9);
    str2[9] = '\0';

    printf("%s", str2);

    return 0;
}
