#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);
    int values[n];
    for(int i = 0; i < n;i++){
        values[i] = i+1;
    }
//    values[4] *=5;
    for(int i = 0; i < n; i++){
        printf("%dth value of array is %d\n", i+1, values[i]);
    }

    printf("Size of the array is %d\n", sizeof(values)/sizeof(values[0]));



    return 0;
}
