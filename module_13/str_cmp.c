#include<stdio.h>
#include<string.h>

int main(){

    char s1[100], s2[100];
    scanf("%s %s", &s1, &s2);
    int val = strcmp(s1, s2);
    if (val < 0){
        printf("String 1 is smaller.\n");
    }else if (val > 0){
        printf("String 2 is smaller.\n");
    }else{
        printf("Both are equal.\n");
    }


    return 0;
}

