#include<stdio.h>
#include<math.h>

int main(){
   long long int a;
    scanf("%lld",&a);

   if(a>=pow(-2,31) && a<=(pow(2,31)-1)){
       printf("Yes\n");
   }else{
       printf("No\n");
   }


    return 0;
}
