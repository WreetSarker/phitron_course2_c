#include<stdio.h>
#include<string.h>
#include<limits.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int max = INT_MIN;
    for(int i = 0; i < n; i++){
        if(arr[i] > max){
            max=arr[i];
        }
    }

    int count = 0;
    for(int i = 0; i < n; i++){
        count += max-arr[i];

    }

    printf("%d", count);






    return 0;
}
