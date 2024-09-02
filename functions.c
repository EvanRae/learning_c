//woooooooooooooooooo functions 

#include <stdio.h>




void birthday(){
    printf("Happy birthday to you\n");
}

void toYou(char name[]){ //if variable defined in main func, needs the data type before the variable
    printf("Happy birthday dear %s\n", name);
}

void howOldAreThey(int age){
    printf("you are %d years old!", age);
}

int main(){ //the main function obviously

    int age = 22;
    char name[] = "Evan";

    birthday();
    birthday();
    toYou(name);
    birthday();
    howOldAreThey(age);

    return 0;
}