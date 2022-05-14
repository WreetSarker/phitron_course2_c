#include<stdio.h>
#include<string.h>

int main(){
    int t;
    scanf("%d", &t);

    for(int j = 0; j <t; j++){
        char s[101];
        scanf("%s", s);

        int len = strlen(s);
        int fin = len/2;
        char res[fin+1];
        for(int i = 0, k=0; k < fin+1;i+=2, k++){
            res[k] = s[i];
        }
        res[fin] = s[len-1];
        res[fin+1] = '\0';
        printf("%s\n", res);

    }






    return 0;
}
