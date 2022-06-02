#include<stdio.h>
#include<string.h>

struct Binary{
    char str[50];
};


struct Binary toBinary(int n, int k){
    struct Binary binary;
    int idx = 0;
    int val = n;
    int d;
    while (val != 0){
        d = val%2;
        val = val/2;
        printf("%d\n", val);
        binary.str[idx] = '0' + d;
        idx ++;
    }
    for(int i = idx; i < k; i++){
        binary.str[i] = '0';
    }
    binary.str[k] = '\0';
    printf("%s\n", binary.str);
    strrev(binary.str);
    return binary;

};

int main(){
    struct Binary bin;
    bin = toBinary(12, 8);
    printf("%s\n", bin.str);


    return 0;
}
