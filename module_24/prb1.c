#include<stdio.h>

struct Date{
    int day;
    int month;
    int year;
};

int main(){
    struct Date day1, day2;

    printf("Enter first date.");
    scanf("%d %d %d", &day1.day, &day1.month, &day1.year);

    printf("Enter second date.");
    scanf("%d %d %d", &day2.day, &day2.month, &day2.year);

    printf("%d", day1.day == day2.day);


    return 0;
}
