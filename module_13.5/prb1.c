#include<stdio.h>
#include<string.h>

int main(){
    int arr[5] = {1};
    int sum = 0;
    int sz = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i <sz; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < sz; i++){
        sum += arr[i];
    }
    printf("Sum of elements of the array is: %d", sum);

    return 0;
}
