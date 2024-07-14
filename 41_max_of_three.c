/**
 *    author: mohin
 **/

#include <stdio.h>

// Function to find the maximum of three integers
void findMax(int a, int b, int c) {
    int max = a;  // Assume a is the maximum
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    printf("Max(a, b, c): %d\n", max);
}

int main() {
    int a, b, c;

    printf("Enter three integers:\n");

    printf("a: ");
    scanf("%d", &a);

    printf("b: ");
    scanf("%d", &b);

    printf("c: ");
    scanf("%d", &c);

    // Call the function to find out max value
    findMax(a, b, c);

    return 0;
}

/*
    Functions returning void do not return a value.
*/
