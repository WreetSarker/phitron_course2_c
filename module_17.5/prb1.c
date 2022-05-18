#include<stdio.h>

double findArea(double length, double width){

    return (double)length*width;

}

int main(){
    double a, b;
    scanf("%lf %lf", &a, &b);

    double area = findArea(a, b);
    printf("%0.2lf\n", area);



    return 0;
}
