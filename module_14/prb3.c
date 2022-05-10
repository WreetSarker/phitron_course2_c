#include<stdio.h>
#include<string.h>

int main(){
    int digits[10]={0};
    for(int i = 0; i <10; i++){
        scanf("%d", &digits[i]);
    }
    int k;
    scanf("%d", &k);

    int val = digits[0];
    for(int i = 1; i<k; i++){
        val = digits[val];
    }

    printf("%d\n", val);



    return 0;

}
