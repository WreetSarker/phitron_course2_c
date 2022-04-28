#include<stdio.h>

int main(){
    int rem, f,m,t;
    scanf("%d %d %d %d", &rem, &f, &m, &t);


    while (rem > -100000000){
        int f_rem = rem - f;
        rem = rem -f;
        int m_rem = rem - m;
        rem -= m;
        int t_rem = rem - t;
        rem -=t;


        if (f_rem < 0){
            printf("F\n");
            break;
        }else if (m_rem < 0){
            printf("M\n");
            break;
        }else if (t_rem < 0){
            printf("T\n");
            break;
        }
    }


    return 0;
}
