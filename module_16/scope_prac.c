#include<stdio.h>


int add(int a, int b){
    static int count = 0;
    count++;
    return a+b;
}


int main(){
    add(2, 3);
    add(3, 4);


    return 0;
}
