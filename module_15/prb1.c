#include<stdio.h>
#include<string.h>

int main(){

    char s[101];
    scanf("%s", s);
    int len = strlen(s);
    int c = 0, count[26] = {0}, x;
    while (s[c] != '\0') {

      if (s[c] >= 'a' && s[c] <= 'z') {
         x = s[c] - 'a';
         count[x]++;
      }

      c++;
   }
    int freq = 0;

    for(int i = 0;i<26; i++){
        if(count[i] >=1){
            freq++;
        }
    }



    if(freq%2==0){
        printf("CHAT WITH HER!\n");
    }else{
        printf("IGNORE HIM!\n");
    }


    return 0;
}
