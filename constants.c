#include <stdio.h>

int main(){

    //constant = fixed value that cannot be altered during program execution

    const float PI = 3.14159;  //constants should be named in all caps

    PI = 400.54; //cannot change the value so throws error

    printf("%f", PI);

    return 0;
}