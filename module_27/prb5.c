#include<stdio.h>
#include<string.h>

struct arrHolder{
    int arr[100];
};

struct Fraction{
    int nom;
    int denom;
};

struct Date{
    int day;
    int month;
    int year;
};

struct Student {
    char name[100];
    int roll;
    int class;
    struct Date dob;
};


int main(){

    struct Student std = {.roll = 5};
    char name[] = "ABCD";
    strcpy(std.name, name);
    printf("Name: %s, roll: %d\n", std.name, std.roll);


    return 0;
}
