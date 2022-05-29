#include<stdio.h>

struct Date{
    int day;
    int month;
    int year;
};

int getMonth(struct Date date){
    return date.month;
}

struct Date nextDayNextMonth(struct Date date){
    struct Date ans = {date.day+1, date.month+1, date.year};
    return ans;
};

int main(){
    struct Date start;
    printf("Enter the start date: ");
    scanf("%d %d %d", &start.day, &start.month, &start.year);
    struct Date next = nextDayNextMonth(start);
    printf("The next day and next month is: %d %d\n", next.day, next.month);


    return 0;
}
