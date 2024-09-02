#include <stdio.h>
#include <ctype.h>

int main(){

    char unit;
    float temp;

    printf("\nPlease enter the temperature unit (C or F): ");
    scanf("%c", &unit);

    switch(toupper(unit)){
        case 'C':
            printf("\nPlease enter the current temperature: ");
            scanf("%f", &temp);
            temp = (temp * 9 / 5 ) +32;
            printf("The current temperature in farenheight is: %.1f", temp);
            break;
        case 'F':
            printf("\nPlease enter the current temperature: ");
            scanf("%f", &temp);
            temp = ((temp - 32) *5) /9;
            printf("The current temperature in Celcius is: %.1f", temp);
            break;
        default:
            printf("Please enter a valid unit\n");
            break;

    }



    return 0;
}