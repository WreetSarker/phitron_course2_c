#include<stdio.h>
#include<string.h>
struct Binary{
    char str[50];
};


struct Binary toBinary(int n){
    struct Binary binary;
    int idx = 0;
    int val = n;
    int d;
    while (val != 0){
        d = val%2;
        val = val/2;
        binary.str[idx] = '0' + d;
        idx ++;
    }
    binary.str[idx] = '\0';
    strrev(binary.str);
    return binary;

};

int main(){
    struct Binary bin;
    bin = toBinary(23);
    printf("%s\n", bin.str);


    return 0;
}
