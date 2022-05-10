#include<stdio.h>
#include<string.h>

int main(){

    int n;
    scanf("%d", &n);
    if(isDistinct(n) == 1){
        n++;
    }


    while (isDistinct(n) != 1){
        n++;
    }
    printf("%d\n", n);


    return 0;

}

int isDistinct(num){
    int n1 = num%10;
    num = num/10;
    int n2 = num%10;
    num = num/10;
    int n3 = num%10;
    int n4 = num/10;


    if(n1 != n2 && n2 != n3 && n1 != n3 && n1!=n4 && n2!=n4 && n3!=n4){
        return 1;
    }else{
        return 0;
    }

}
