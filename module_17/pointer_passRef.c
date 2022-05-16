#include<stdio.h>

void makeDouble(int *x){
    *x *=2;

}

int main(){

    int a = 20;
    makeDouble(&a);
    printf("%d\n", a);


    return 0;
}
