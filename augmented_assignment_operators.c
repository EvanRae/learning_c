#include <stdio.h>

int main(){

    //augmented assignment operators = used to replace a statement where an operator
    //                                 takes a variable as one of its arguments and then
    //                                 assigns the result back to the same variable
    //                                 x = x + 1 achieve this without ++
    //                                 x+=1 where += is the augmentor

    int x = 10;

    //to increment by 2
    x+=2; // = 12

    //x = x * 4
    x*=4; // = 40

    //x = x / 5
    x/=5; // = 2

    //x = x % 2
    x%=2; // = 1

    printf("%d", x);

    return 0;
}