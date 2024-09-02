//lets gooooooooooooo if statements
#include <stdio.h>

int main(){

    int age;

    printf("\nEnter your age: ");
    scanf("%d", &age);

    if(age >= 18){
        printf("\nYou may enter this website");
    }

    else if(age < 0){
        printf("\nThis age is invalid");
    }

    else if(age > 120){
        printf("\nThis age is invalid");
    }

    else{
        printf("\nYou are too young to enter this website");
    }

    return 0;
}