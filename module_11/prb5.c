#include<stdio.h>

int main(){
    int a,b,c,d,e,f,x;
    scanf("%d %d %d %d %d %d %d", &a, &b, &c, &d, &e, &f, &x);

    int s_t = c;
    int s_a = f;
    int d_t = a*b;
    int d_a = d*e;

    int sc_t = 0;
    int dc_t = 0;

    int sc_a = 0;
    int dc_a = 0;

    while (sc_t <=x){
        if((x-sc_t)<c){
            dc_t += (b*(x-sc_t));
            sc_t += (x-sc_t);
            break;
        }
        dc_t += d_t;
        sc_t += (s_t+a);
    }

    while (sc_a <=x){
        if((x-sc_a)<f){
            dc_a += (e*(x-sc_a));
            sc_a += (x-sc_a);
            break;
        }
        dc_a += d_a;
        sc_a += (s_a+d);
    }
    if(dc_a > dc_t){
        printf("Aoki\n");
    }else if(dc_t > dc_a){
        printf("Takahashi\n");
    }else{
        printf("Draw\n");
    }

    return 0;
}
