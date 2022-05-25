#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    int min;

    for(int i = 0; i < n-1; i++){
        min = i;
        int temp = arr[min];
        for(int j = i+ 1; j < n; j++){
            if (arr[j] < arr[min]){
                min = j;
            }
        }
        arr[i] = arr[min];
        arr[min] = temp;
    }

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
