#include<stdio.h>
#include<string.h>

int main(){

    char a[] = "Hello";
    char b[] = "World";
    int len = strlen(a) + strlen(b) + 1;
    char c[len];

    for(int i = 0; i<strlen(a); i++){
        c[i] = a[i];
    }
    for(int i = strlen(a), j = 0; i < len; i++, j++){
        c[i] = b[j];
    }
    c[len] = '\0';
    printf("%s\n", c);

    char d[100] = "Hi";
    char e[100] = "There";
    d[strlen(d)] = ',';
    strcat(d, e);
    printf("%s", d);

    return 0;
}

