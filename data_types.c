#include <stdio.h>
#include <stdbool.h>  //always import for boolean

int main(){

    char a = 'A';                           //single character    %c
    char b[] = "String Emulation";          //array of characters %s

    float c = 3.141592;                  //4 bytes (32 bits) 6-7 digits %f
    double d = 3.141592653589793;       //8 bytes (64 bits) 15-16 digits %lf - more frequently used
                                //to display decimal points %0.xf and %0.xlf where x = amount of digits
    
    bool e = true;                  //1 byte (true of false) %d

    char f = 100;                   //1 byte (-128 to +127) char as numeric value %d or %c
                //printing %d = 100
                //printing %c = d
    unsigned char g = 255;          //1 byte (0 to +255) %d or %c - if over 255 will go back to 0

    short int h = 32767;            //2 bytes (-32,768 to +32,767) %d - overflows to minimum value if over max
    unsigned short int i = 65535;   //2 bytes (0 to +65,535) %d - overflows to 0
    //can be declared as simply "short h = 32767" - no int needed

    int j = 2147483647;             //4 bytes (-2.4bn to +2.4bn) %d - overflows to minimum value if over max
    unsigned int k = 4294967295;    //4 bytes (0 to 4.2bn) %u - overflows to 0
    //implicit "long" integers, for long long ints it must be specified twice

    long long int l = 9223372036854775807;   //8 bytes (-9 quintillion to +9 quintillion) %lld
    unsigned long long int m = 18446744073709551615;    //8 bytes (0 to +18 quintillion) %llu 
    //apply "U" to end of number to remove warning of unsigned int




    return 0;
}