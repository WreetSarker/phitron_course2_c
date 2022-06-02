#include<stdio.h>
#include<string.h>

typedef struct {
    int day;
    int month;
    int year;
}Date;

typedef struct {
    char * name[100];
    int roll;
    int class;
    Date dob;


}Student;


int main(){
    char name[] = "Wreet";
    Student std1 = {.class = 1, .roll=10};
    Date dob = {31, 10, 1996};
    strcpy(std1.name, name);
    std1.dob = dob;
    printf("Name: %s\n", std1.name);
    printf("Date of birth: %d-%d-%d\n", std1.dob.day, std1.dob.month, std1.dob.year);

    return 0;
}
