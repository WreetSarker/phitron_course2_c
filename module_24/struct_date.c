#include<stdio.h>

struct Date{
    int day;
    int month;
    int year;
};



int main(){
    int months[12] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    struct Date start;
    scanf("%d %d %d", &start.day, &start.month, &start.year);

    struct Date next = start;

    if(next.day != months[next.month-1]){
        next.day ++;
    }else{
        if(next.month != 12){
            next.day = 1;
            next.month ++;
        }else{
            next.day = 1;
            next.month = 1;
            next.year++;
        }
    }

    printf("Todays date: %d-%d-%d\n", start.day, start.month, start.year);
    printf("Tomorrows date: %d-%d-%d\n", next.day, next.month, next.year);
    return 0;
}
