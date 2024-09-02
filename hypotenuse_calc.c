#include <stdio.h>
#include <math.h>

int main(){

    double adjacent;
    double opposite;
    double hypotenuse;

    printf("\nEnter the adjacent length: ");
    scanf("%lf", &adjacent); //remember "&" for inserting user input to variable
    printf("\nEnter the opposite length: ");
    scanf("%lf", &opposite);

    hypotenuse = sqrt(pow(adjacent, 2) + pow(opposite, 2));

    printf("\nHypotenuse: %lf", hypotenuse);


    return 0;
}