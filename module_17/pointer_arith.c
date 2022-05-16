#include<stdio.h>

int main(){

    char ch = 'a';
    char*  pch = &ch;

    printf("The address %lld contains the value: %c \n", pch, *pch);

    pch++;
    printf("New address is %lld\n", pch);

    int number = 20;
    int *pnumber = &number;

    printf("%lld\n", pnumber);

    pnumber++;

    printf("%lld\n", pnumber);



    int val1, val2;
    int *pnum1 = &val1;
    int *pnum2 = &val2;

    printf("pnum1: %lld, pnum2: %lld\n", pnum1, pnum2);
    printf("Difference %d\n", pnum1 - pnum2);






    return 0;
}
