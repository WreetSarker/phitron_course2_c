#include<stdio.h>
#include<string.h>
#include<limits.h>

int main(){
    int t, n;
    scanf("%d", &t);


    for(int i = 0; i<t;i++){
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++){
            scanf("%d", &arr[i]);
        }

        int res = 0;
        for(int i = 0; i < n-2; i++){
            if(arr[i] != arr[i+1] || arr[i+1] != arr[i+2]){
                if (arr[i+1] != arr[i+2] && arr[i] == arr[i+2]){
                    res = i+2;
                }else if(arr[i+1] == arr[i+2]){
                    res = i+1;
                }else{
                    res = i+3;
                }
            }
        }

        printf("%d\n", res);
    }



    return 0;
}
