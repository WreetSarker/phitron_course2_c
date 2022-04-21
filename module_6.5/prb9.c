#include<stdio.h>

int main(){

    /*
    Fizzbuzz is a very well known problem. Given a positive integer N, you need to print n lines.
        For multiples of 3, you should print Fizz.

        For the multiples of 5, you should print Buzz.

        For numbers which are multiple of 3 and 5 both, print “FizzBuzz”.

        In other cases, print the current line number.

        Example

        Input: 5

        Output:
            1
            2
            Fizz
            4
            Buzz
    */
    int N;
    printf("Enter number of lines: ");
    scanf("%d", &N);
    int val;
    for (int i = 1; i <= N; i++){
        scanf("%d", &val);
        if(val%3==0 && val %5 != 0){
            printf("Fizz\n");
        }else if(val%5 ==0 && val%3 != 0){
            printf("Buzz\n");
        }else if(val%3 == 0 && val%5 == 0){
            printf("FizzBuzz\n");
        }else{
            printf("%d", i);
        }
    }

    return 0;
}

