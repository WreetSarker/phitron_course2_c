#include<stdio.h>

int main(){


    int val = 100;
    int* pval = &val;

    printf("%d\n", val);
    printf("%d\n", *pval);

    val = 200;
    printf("%d\n", val);
    printf("%d\n", *pval);


    return 0;
}
