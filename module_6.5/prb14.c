#include<stdio.h>

int main(){

    /*

    Remember the program we wrote to calculate the GPA of a student. Update it so that it can calculate the GPA of multiple terms and finally output the overall CGPA.
    For simplicity assume that CGPA is the average of all terms GPA.
    Example
        Input
        Enter number of terms: 2
        Term 1:
        Enter number of Subjects: 3
        Enter Marks Subject 1: 80
        Grade = A+, Points = 5.00
        Enter Marks Subject 2: 70
        Grade = A, Points = 4.00
        Enter Marks Subject 3: 65
        Grade = B, Points = 3.00
        Term GPA: 4.00

        Term 2:
        Enter number of Subjects: 3
        Enter Marks Subject 1: 50
        Grade = C, Points = 2.00
        Enter Marks Subject 2: 70
        Grade = A, Points = 4.00
        Enter Marks Subject 3: 65
        Grade = B, Points = 3.00
        Term GPA: 3.00

        Overall CGPA = 3.50
    */

    int terms;
    printf("Input number of terms: ");
    scanf("%d", &terms);
    int subjects;
    int marks;
    int total = 0;

    for(int i = 1; i <= terms; i++){
        float term_total = 0.0;
        printf("Term %d:\n", i);
        printf("Enter number of Subjects: ");
        scanf("%d", &subjects);

        for(int j = 1; j <= subjects; j++){
            printf("Enter Marks Subject %d: ", j);
            scanf("%d", &marks);
            if(marks >= 80 && marks <= 100){
                printf("Grade = A+, Points = 5.00\n");
                term_total += 5.00;
            }else if(marks >= 70 && marks <= 79){
                printf("Grade = A, Points = 4.00\n");
                term_total += 4.00;
            }else if(marks >= 60 && marks <= 69){
                printf("Grade = B, Points = 3.00\n");
                term_total += 3.00;
            }else if(marks >= 50 && marks <= 59){
                printf("Grade = C, Points = 2.00\n");
                term_total += 2.00;
            }else if(marks >= 40 && marks <= 49){
                printf("Grade = D, Points = 1.00\n");
                term_total += 1.00;
            }else {
                printf("Grade = F, Points = 0.00\n");
                term_total += 0.00;
            }
        }
        printf("Term GPA: %0.2lf\n", (float)term_total/subjects);
        total += (float)term_total/subjects;

    }
    printf("Overall CGPA: %0.2lf", (float) total/terms);

    return 0;
}

