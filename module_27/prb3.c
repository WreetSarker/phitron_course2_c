#include<stdio.h>
#include<string.h>

struct arrHolder{
    int arr[100];
};

struct Fraction{
    int nom;
    int denom;
};

void inverseFraction(struct Fraction fraction){
    int newNom = fraction.denom;
    int newDenom = fraction.nom;

    struct Fraction inverse = {.nom = newNom, .denom = newDenom};
    printf("Reverse fraction of %d/%d is %d/%d", fraction.nom, fraction.denom, inverse.nom, inverse.denom);
}


int main(){

    struct Fraction frac = {2, 3};
    inverseFraction(frac);


    return 0;
}
