#include<stdio.h>
#include<string.h>
#include<limits.h>

int main(){
    int n;
    printf("Input size of the array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter values to array: ");
    for(int i = 0; i <n;i++){
        scanf("%d", &arr[i]);
    }

    int idx = INT_MIN;
    int val;
    printf("Value to find: ");
    scanf("%d", &val);

    for(int i = 0; i < n; i++){
        if(arr[i] == val){
            idx = i;
        }
    }

    if(idx >= 0){
        printf("Value %d is at index: %d", val, idx);
    }else{
        printf("Value not found!");
    }


    return 0;
}
