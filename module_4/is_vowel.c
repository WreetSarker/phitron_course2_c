#include<stdio.h>

int main(){

    char ch;
    scanf("%c", &ch);

    if (ch == 'a' || ch == 'e' || ch == 'e' || ch == 'o' || ch == 'uc'){
        printf("%c is a vowel", ch);
    }else {

        printf("%c is a consonant", ch);
    }

    return 0;
}
