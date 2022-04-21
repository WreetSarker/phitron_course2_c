#include<stdio.h>

int main(){

    /*
    Write a C program to check whether an alphabet is a vowel or consonant.

    */
    char ch;
    printf("Enter alphabet: ");
    scanf("%c", &ch);

   if(ch == 'a' || ch == 'A' || ch == 'e' || ch=='E' || ch =='i' || ch =='I' || ch == 'o' || ch == 'O' || ch =='u' || ch =='U'){
        printf("vowel\n");
   }else{
        printf("consonant.\n");
   }

    return 0;
}

