#include<stdio.h>
#include<string.h>

int calcXOR(int l, int r){
    int sum = l;

    for(int i = l+1; i <=r; i++){
        sum = sum ^ i;
    }

    return sum;

}


int main(){
    int l, r;
    scanf("%d %d", &l, &r);
    int sum = calcXOR(l, r);
    printf("%d\n", sum);


    return 0;
}
