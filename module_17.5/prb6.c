#include<stdio.h>
#include<string.h>

void truncate(char str[], int k){
    str[k] = '\0';
    printf("%s", str);
}


int main(){
    char str[101];
    scanf("%s", &str);
    int k;
    scanf("%d", &k);
    truncate(str, k);



    return 0;
}
