#include <stdio.h>
#include <math.h>

int main(){

    const double PI = 3.14159; //cannot be changed
    double radius;
    double circumference;
    double area;

    printf("\nEnter the radius of a circle: ");
    scanf("%lf", &radius);
    
    circumference = 2 * PI * radius;
    area = PI * radius * radius;

    printf("\nCircumference: %lf", circumference);
    printf("\nArea: %lf", area);
    


    return 0;
}