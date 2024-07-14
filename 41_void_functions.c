/**
 *    author: mohin
 **/

#include <stdio.h>

// Function to find the maximum of three integers
int findMax(int a, int b, int c) {
    int max = a;  // Assume a is the maximum
    if (b > max) {
        max = b;
    }
    if (c > max) {
        max = c;
    }
    return max;
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

    // Call the function to find and print the maximum value
    int max = findMax(a, b, c);
    printf("Max(a, b, c): %d\n", max);

    return 0;
}

/*
    Functions returning void do not return a value.
*/
