#include<stdio.h>

int getMin(int a, int b){
    return a<b ? a:b;
}


int main(){

    int n;
    scanf("%d", &n);

    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int min = arr[0];

    for(int i= 0; i < n; i++){
        min = getMin(arr[i], min);
    }

    printf("Minimum of the array is: %d\n", min);

    return 0;
}
