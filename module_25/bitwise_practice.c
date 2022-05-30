#include<stdio.h>
#include<string.h>

void toBinary(unsigned int val, char str[]){
    int idx = 0;
    int digit;
    while (val > 0){
        digit = val%2;
        str[idx] ='0'+ digit;
        val /=2;
        idx++;
    }

    str[idx] = '\0';
    int iter = idx;
    printf("%s\n", str);
    for(int i = 0; i <iter/2; i++){
        int temp = str[i];
        str[i] = str[iter-1];
        str[iter-1] = temp;
        iter --;
    }
}


int main(){
    char str[100];
    int n;
    scanf("%d", &n);
    toBinary(n, str);
    printf("%s\n", str);

    return 0;
}
