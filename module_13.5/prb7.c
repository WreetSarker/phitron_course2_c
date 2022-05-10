#include<stdio.h>
#include<string.h>

int main(){
    char str[100];
    printf("Enter string: ");
    scanf("%s", str);

    int len = strlen(str);
    char rev[len];
    for(int i = len-1, j= 0; i>=0; i--, j++){
        rev[j] = str[i];
    }
    rev[len] = '\0';
    printf("%s", rev);


    return 0;
}
