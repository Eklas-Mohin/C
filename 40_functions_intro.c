/**
 *    author: mohin
 **/

#include <stdio.h>

// Function to calculate the sum of two integers
int sum(int a, int b) {
    int s = a + b; // Calculate the sum of a and b
    return s; // Return the sum
}

int main() {
    int a, b, c;

    // Prompt user for input
    printf("Enter value for a: ");
    scanf("%d", &a);

    printf("Enter value for b: ");
    scanf("%d", &b); 

    c = sum(a, b); // Call the sum function and store the result in c

    printf("Sum of a and b is: %d\n", c);

    return 0;
}
