#include <stdio.h>
#include <string.h> //this import will allow us to work with strings

int main(){

    char name[25]; //name[max bytes] for storage purposes of name
    int age;

    printf("\nWhat is your name?: ");
    //scanf("%s", &name); //blank spaces break this function
    fgets(name, 25, stdin); //variable storing, 25 bytes of storage, standard input to read all chars incl enter
    name[strlen(name)-1] = '\0'; //removes the enter key that was read from the fgets command 

    printf("\nHow old are you?: ");
    scanf("%d", &age); //read input with scanf, format specifier of variable, & is the address of operator, variable name

    printf("\nHello %s", name);
    printf("\nYou are %d years old", age); //print the value of the user input


    return 0;
}