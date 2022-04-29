#include<stdio.h>

int main(){

    int n, k, a;
    scanf("%d %d %d", &n, &k, &a);
    int current_gift;
    current_gift = a;

    while (k > 0){
        if((k-1) == 0){
            if(current_gift == n){
                current_gift = 1;
                k --;
                break;
            }else{
                k--;
                break;
            }
        }

        if(current_gift <= n && (k-1) != 0){
            current_gift += 1;
            k --;

        }else if(current_gift > n){
            current_gift = 1;
            k--;

        }
        }
    int fin;
    if ((current_gift-1) == 0){
        fin = n;
    }else if(current_gift > n){
        fin = (current_gift- n);
    }else{
        fin = current_gift -1;
    }

    printf("%d\n", fin);

    return 0;
}
