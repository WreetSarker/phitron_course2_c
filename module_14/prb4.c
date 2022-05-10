#include<stdio.h>
#include<string.h>
#include<limits.h>

int main(){
    int n;
    scanf("%d", &n);

    int arr[n];
    for(int i = 0; i <n ; i++){
        scanf("%d", &arr[i]);
    }
    int amazing = 0;
    int min = arr[0];
    int max = arr[0];

    for(int i = 1; i < n; i++){
        if(arr[i] > max){
            max = arr[i];
            amazing ++;
        }else if(arr[i] < min){
            min = arr[i];
            amazing++;
        }
    }

    printf("%d", amazing);


    return 0;

}
