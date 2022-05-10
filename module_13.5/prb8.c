#include<stdio.h>
#include<string.h>

int main(){
    char str[1000];
    gets(str);

    int vowel = 0;
    int consonant = 0;
    int len = strlen(str);

    for(int i = 0; i < len; i++){
        if(str[i] == 'a' || str[i] == 'A'|| str[i] == 'e'|| str[i] == 'E'|| str[i] == 'i'|| str[i] == 'I'|| str[i] == 'O'|| str[i] == 'o'|| str[i] == 'u'|| str[i] == 'U'){
            vowel ++;
        }else{
            consonant++;
        }
    }

    printf("Vowels: %d\nConsonants: %d\n", vowel, consonant);

    return 0;
}
