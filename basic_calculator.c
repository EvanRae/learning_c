#include <stdio.h>
#include <math.h>

int main(){

    char operator;
    double number1;
    double number2; 
    double output;

    printf("Please enter a mathematical operator (+ - * /): \n");
    scanf("%c", &operator); //REMEMBER TO PUT THE & SYMBOL FOR TAKING INPUTS


    switch(operator){
        case '+':
            printf("\nPlease input your first number: ");
            scanf("%lf", &number1);
            printf("\nPlease input your second number: ");
            scanf("%lf", &number2);
            output = number1 + number2;
            printf("%.2lf", output);
            break;
        case '-':
            printf("\nPlease input your first number: ");
            scanf("%lf", &number1);
            printf("\nPlease input your second number: ");
            scanf("%lf", &number2);
            output = number1 - number2;
            printf("%.2lf", output);
            break;
        case '*':
            printf("\nPlease input your first number: ");
            scanf("%lf", &number1);
            printf("\nPlease input your second number: ");
            scanf("%lf", &number2);
            output = number1 * number2;
            printf("%.2lf", output);
            break;
        case '/':
            printf("\nPlease input your first number: ");
            scanf("%lf", &number1);
            printf("\nPlease input your second number: ");
            scanf("%lf", &number2);
            output = number1 / number2;
            printf("%.2lf", output);
            break;
        default:
            printf("%c is not a valid operator",operator);
            break;
    }




    return 0;
}