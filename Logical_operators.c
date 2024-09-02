#include <stdio.h>
#include <stdbool.h>

int main(){

    //&& operators to compare if 2 conditions are both TRUE

    
    float temp = 25;
    bool sunny = true;

    if(temp >= 0 && temp <= 30 && sunny){ //checks if both conditions are true, if temp = 100 it will still be considered bad
        printf("The weather is good");
    }
    else{
        printf("The weather is bad");
    }


    if(temp >=0 || temp <=30 ){ //OR operator  = || where one condition is allowed to be false
        print("The weather is good");
    }


    if(!sunny){ //NOT operator = !
        printf("It is not sunny today");
    }
    else{
        printf("It's sunny outside");
    }

    return 0;
}