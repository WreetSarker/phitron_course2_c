#include<stdio.h>

int main(){
    int n, m;
    scanf("%d %d", &n, &m);

    for(int row = 1; row <= n; row++){
        for(int col = 1; col <= m; col ++){
            if(row %2 != 0){
                printf("#");
            }else if(row%2 == 0 && row%4 != 0){
                if(col != m){
                    printf(".");
                }else{
                    printf("#");
                }
            }else if(row % 4 == 0){
                if(col == 1){
                    printf("#");
                }else{
                    printf(".");
                }
            }

        }
        printf("\n");
    }

    return 0;
}
