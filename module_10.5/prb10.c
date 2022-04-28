#include<stdio.h>
#include<math.h>

int main(){
    float a;
    scanf("%f", &a);
    int full = (int)a/1;

    if ((a-full) < 0.5 ){
        printf("%d", (int)floor(a));
    }else{
        printf("%d", (int)ceil(a));
    }

    return 0;
}
