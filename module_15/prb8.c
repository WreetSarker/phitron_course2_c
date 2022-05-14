#include<stdio.h>
#include<string.h>

int main(){

    int n, d;
    scanf("%d %d", &n, &d);
    int arr[n];


    for(int i= 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    for(int i = 0; i < d; i++){
        int j, first;
        first = arr[0];

        for(j = 0; j < n-1; j++){
            arr[j] = arr[j+1];
        }
        arr[j] = first;
    }


    for(int i = 0; i < n; i++){
        printf("%d ", arr[i]);
    }



    return 0;
}
