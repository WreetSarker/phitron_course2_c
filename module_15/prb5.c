#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){

    int n;
    scanf("%s", &n);
    char s[n+1];
    scanf("%s", s);


    int c = 0, count[26] = {0}, x;

    char res[n+1];
    for(int i =0; i < n; i++){
        res[i] = tolower(s[i]);
    }
    res[n] = '\0';


    while (res[c] != '\0') {

      if (res[c] >= 'a' && res[c] <= 'z') {
         x = res[c] - 'a';
         count[x]++;
      }

      c++;
   }


    int freq = 0;
    for(int i = 0;i<26;i++){
        if(count[i]>=1){
            freq++;
        }
    }

    if(freq>=26){
        printf("YES");
    }else{
        printf("NO\n");
    }




    return 0;
}
