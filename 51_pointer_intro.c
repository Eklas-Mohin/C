/**
*    author: mohin
**/

#include <stdio.h>

int main() {
    int i = 72;
    printf("i = %d\n", i);
    printf("Address of i = %p\n", &i);
    int *k = &i; // Declaring and initializing a pointer variable
    // k is pointing to i
    printf("Address of i = %p\n", k);
    printf("Value of i = %d\n", *k); // Dereferencing

    int int_varibale = 565;
    char char_varibale = 'H';
    float float_variable = 1235.2588;

    int* int_pointer = &int_varibale; // pointer to integer type variable
    char* char_pointer = &char_varibale; // pointer to character type variable
    float* float_pointer = &float_variable; // pointer to flaot type variable

    return 0;
}

/*
    A pointer is defined as a derived data type 
    that can store the address of other variables or a memory location
*/
