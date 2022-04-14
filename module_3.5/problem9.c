#include<stdio.h>

int main(){


    /*

    Write a C program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days.
    Test Data :

        Input no. of days: 2535

    Expected Output:

        6 Year(s)

        11 Month(s)

        15 Day(s)

    */

    int days;
    printf("Input no of days: ");
    scanf("%d", &days);
    int years = days/365;
    int rem_month_days = days - (years*365);
    int rem_days = rem_month_days%30;
    printf("%d Year(s)\n%d Month(s)\n%d Days", years, rem_month_days/30 , rem_days);

    return 0;
}

