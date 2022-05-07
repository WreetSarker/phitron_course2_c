#include<stdio.h>

int main(){

    int n;
    printf("Enter the number of fibonacci sequence: ");
    scanf("%d", &n);

    int arr[n];
    arr[0] = 1;
    arr[1] = 1;

    for(int i = 2; i < n; i++){
        arr[i] = arr[i-1] + arr[i-2];
    }

    printf("The %dth value of the sequence is: %d\n", n, arr[n-1]);

    return 0;
}
