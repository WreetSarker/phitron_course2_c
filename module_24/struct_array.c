#include<stdio.h>
#include<string.h>

struct Date{
    int day;
    int month;
    int year;
};

struct Student{
    char name[100];
    int class;
    int roll;
    struct Date dob;

};

void printStudent(struct Student std){
    printf("Name: %s\n", std.name);
    printf("Class: %d\n", std.class);
    printf("Roll is: %d\n", std.roll);
    printf("DOB: %d-%d-%d\n", std.dob.day, std.dob.month, std.dob.year);
}


int main(){
    struct Student std1 = {.class = 9, .roll = 10, .dob = {31,10,1996}};
    char name[] = "Wreet Sarker";
    strcpy(std1.name, name);
    printStudent(std1);

    return 0;
}
