#include<stdio.h>
#include<string.h>

struct Date{
    int day;
    int month;
    int year;

};

struct Student{
    char* name;
    int class;
    int roll;
    struct Date dob;
};


int main(){
    char *names[] = {"Wreet", "Mridul" , "Pritam", "Shishir", "Partho"};
    int rolls[] = {5, 4, 3, 2, 1};
    int months[] = {10, 12, 10, 12, 9};
    int dates[] = {31, 12, 31, 5, 2};
    struct Student students[5];

    for(int i = 0; i < 5; i++){
        strcpy(students[i].name, names[i]);
        students[i].class = 12;
        students[i].roll = rolls[i];
        students[i].dob.day = dates[i];
        students[i].dob.month = months[i];
        students[i].dob.year = 1996;
    }

    for(int i = 0; i < 5 ; i++){
        printf("Name: %s\n",students[i].name);
        printf("Roll: %d\n",students[i].roll);
        printf("Class: %d\n",students[i].class);
        printf("Born in: %d-%d-%d\n",students[i].dob.day, students[i].dob.month, students[i].dob.year);
    }


    return 0;
}
