/**
*    author: mohin
**/

#include <stdio.h>

int main() {
    int i = 72;
    printf("i = %d\n", i);
    printf("Address of i = %p\n", &i);
    int *k = &i; // Declaring and initializing a pointer variable
    printf("Address of i = %p\n", k);
    printf("Value of i = %d\n", *k); // Dereferencing
    return 0;
}

/*
    A pointer is defined as a derived data type 
    that can store the address of other variables or a memory location
*/