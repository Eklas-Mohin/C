#include <stdio.h>

int main() {
    int a = 73; // Variable declaration and initialization
    float b = 55.391; // Real number can be stored
    char c = 'x'; // Character is stored
    double d = 562.555; // Same as float but bigger in size

    printf("Size of int    = %d\n", sizeof(int));     // 4
    printf("Size of flaot  = %d\n", sizeof(float));   // 4
    printf("Size of char   = %d\n", sizeof(char));    // 1
    printf("Size of double = %d\n", sizeof(double));  // 8

    printf("a = %d\n", a);  // %d is the format specifier for int type variable
    printf("b = %f\n", b);  // %f is the format specifier for flaot type variable
    printf("c = %c\n", c);  // %c is the format specifier for char type variable
    printf("d = %lf\n", d); // %lf is the format specifier for double type variable
    return 0;
}