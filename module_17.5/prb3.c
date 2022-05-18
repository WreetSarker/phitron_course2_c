#include<stdio.h>

void rotateArr(int n, int arr[], int k){

    int idx = 0;
    while (idx < k){
        int first = arr[0];
        for(int i = 0; i < n-1; i++){
            arr[i] = arr[i+1];
        }
        arr[n-1] = first;
        idx ++;
    }

}


int main(){
    int n, k;
    scanf("%d  %d", &n, &k);
    int arr[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    rotateArr(n, arr, k);

    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }

    return 0;
}
