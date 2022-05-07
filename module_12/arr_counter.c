#include<stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    int ratings[n];
    for (int i = 0; i<n; i++){
        scanf("%d", &ratings[i]);
    }

    int count;

    int sz = sizeof(ratings)/sizeof(ratings[0]);
    for(int i = 0; i <sz; i++){
        count = ratings[i];
        int total = 0;
        for(int j = 0; j < sz; j++){
            if(ratings[j] == count){
                total ++;
            }
        }
        printf("%d has occurred %d times in the array.\n", count, total);
    }



    return 0;
}
