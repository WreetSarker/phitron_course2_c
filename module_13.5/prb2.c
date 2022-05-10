#include<stdio.h>
#include<string.h>

int main(){
    int n;
    scanf("%d", &n);
    int arr[n] ;

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int max = -1000000;
    int count = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] >= max){
            max = arr[i];
        }
    }
    for(int i = 0; i < n; i++){
        if(arr[i] == max){
            count ++;
        }
    }
    printf("Maximum value is: %d\nMaximum value occurs:%d times\n", max, count);


    return 0;
}
