#include<stdio.h>
#include<string.h>
#include<limits.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    int max1 = INT_MIN;
    int max2 = INT_MIN;

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i < n; i++){
        if(arr[i] > max1){
            max1 = arr[i];
        }
    }

    for(int i = 0; i < n; i++){
        if(arr[i] > max2 && arr[i] < max1){
            max2 = arr[i];
        }
    }

    printf("Second largest value is: %d", max2);


    return 0;
}
