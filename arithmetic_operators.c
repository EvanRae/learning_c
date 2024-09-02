#include <stdio.h>

int main(){

    /*
    + (addition)
    - (subtraction)
    / (division)
    % (modulus)
    ++ (increment)
    -- (decriment)
    */

    int x = 5;
    int y = 2;

    //double z = x / y; (if the values x and y are already "double" not "int")
    //if you leave x and y as "int" write as "float z = x / (double) y;"

    //int z = x % y;
    //printf("%d", z);
    //gives the remainder of any division
    //useful for determining odd or even numbers

    x++;
    y--;
    //useful for loops later on
    printf("%d", x);

    return 0;
}