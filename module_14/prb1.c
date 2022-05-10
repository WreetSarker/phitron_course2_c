#include<stdio.h>
#include<string.h>

int main(){
    int n;
    printf("Array size: ");
    scanf("%d", &n);
    int arr[n];
    printf("Array items: ");

    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }

    int rev[n];
    for(int i = n-1, j= 0; i>=0; i--, j++){
        rev[j] = arr[i];
    }

    for(int i = 0; i < n; i++){
        printf("%d ", rev[i]);
    }



    return 0;

}
