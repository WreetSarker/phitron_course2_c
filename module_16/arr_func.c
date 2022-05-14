#include<stdio.h>

int getArrMin(int n,int arr[]){
    int sz = n;
    int min = arr[0];
    for(int i = 0; i < sz; i++){
        if(arr[i] < min){
            min =  arr[i];
        }
    }
    return min;

}

void recur(){
    static count = 0;
    count ++;
    printf("Function ran %d times.\n", count);
    recur();
}

int main(){

    int a[] = {2, 3, 4, 6, -12, 15};
    printf("%d is the minimum value\n", getArrMin(5, a));

    recur();
    return 0;
}
