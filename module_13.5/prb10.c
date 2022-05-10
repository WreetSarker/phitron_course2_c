#include<stdio.h>
#include<string.h>

int main(){
    char str[1000];
    printf("Enter string: ");
    gets(str);

    char a;
    printf("Enter letter to search for: ");
    scanf("%c", &a);

    int count = 0;
    int len = strlen(str);
    for(int i = 0; i < len; i++){
        if (str[i] == a){
            count ++;
        }
    }
    printf("%c has occurred %d times.\n", a, count);

    return 0;
}
