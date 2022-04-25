#include<stdio.h>

int main(){
    int n;
    scanf("%d", &n);
    char a,b,c;
    int x = 0;

    for(int i = 1; i <= n; i++){
        scanf(" %c %c %c",&a,&b, &c);
        if(a =='X'){
            if(b =='+'){
                x++;
            }else{
                x --;
            }
        }else if(a == '+'){
            x++;
        }else{
            x--;
        }

    }

    printf("%d", x);



    return 0;
}
