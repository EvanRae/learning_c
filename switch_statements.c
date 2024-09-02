//don't be like yandere dev, use these more often than if else
#include <stdio.h>
#include <ctype.h>


int main(){

    //switch statements = more efficient ways of using else if statements

    char grade;
    printf("\nEnter a letter grade: ");
    scanf("%c", &grade);

    switch(toupper(grade)){ //toupper comes from ctype.h and converts all inputs to uppercase
        case 'A':
            printf("Perfect!\n");
            break;
        case 'B':
            printf("Almost there!\n");
            break;
        case 'C':
            printf("Good pass!\n");
            break;     
        case 'D':
            printf("Pass\n");
            break;    
        case 'E':
            printf("Fail\n");
            break;   
        case 'F':
            printf("Ungradable\n");
            break;
        default: //functions as the catch-all else 
            printf("Please enter only valid grades\n");
    }


    return 0;
}