#include<stdio.h>
#include<string.h>
#include<limits.h>

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int arr[n]={0};

    for(int i = 0; i <n; i++){
        scanf("%d", &arr[i]);
    }

    int count = 0;
    int val = arr[k];
    for(int i = 0; i<n; i++){
        if(arr[i] >= val && arr[i] > 0){
            count++;
        }
    }
    printf("%d\n", count);




    return 0;
}
