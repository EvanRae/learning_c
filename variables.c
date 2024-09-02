#include <stdio.h>

int main(){

    //we know what variables are, here's some C examples

    int x; //declaring the variable
    x = 123; //initializing the variable
    int y = 321; //both declare and init

    int age = 22; //integer - represented by %d secret character
    float uniGrade = 69.9; //floating point (decimal) number - represented by %f
    char name[] = "Evan"; //array of characters square brackets double quotes - emulates string - represented by %s
    char grade = 'A'; //single character single quotes.

    printf("Your name is %s\n", name);
    printf("You are %d years old\n", age);
    printf("Your university grade was %f%%\n", uniGrade);

    return 0;
}