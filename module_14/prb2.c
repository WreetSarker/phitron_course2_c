#include<stdio.h>
#include<string.h>

int main(){
    char str[10];
    printf("Enter string: ");
    gets(str);
    printf("%s\n", str);

    int count;
    for(int i = 48; i <58; i++){
        count = 0;
        for(int j = 0; j <10;j++){
            if(str[j] == i){
                count ++;
            }
        }
        if(count == 0){
            printf("Missing number is: %d\n", i-48);
            break;
        }
    }



    return 0;

}
