#include<stdio.h>

int main(){
    int s, t, x;
    scanf("%d %d %d", &s, &t, &x);
    float fin = x + 0.5;

    int office_time;

    if (s <= t){
        office_time = t-s;
        if(fin >= s && fin <= t){
            printf("Yes\n");
            return 0;
        }else{
            printf("No\n");
            return 0;
        }
    }else{
        office_time = -1 *(t-s);
        if(x < t){
            if(fin < t && fin <= s){
            printf("Yes\n");
            return 0;
        }else{
            printf("No\n");
            return 0;
        }

        }else{
            if(fin > s && fin > t){
                printf("Yes\n");
            }else{
                printf("No\n");
            }
        }
    }




    return 0;
}
