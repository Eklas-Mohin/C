/**
*    author: mohin
**/

#include <stdio.h>

// Function to display the maximum of three integers
void display_max(int a, int b, int c) {
    int mx;
    // Determine the maximum value among a, b, and c
    if (a > b && a > c) {
        mx = a;
    } else if (b > a && b > c) {
        mx = b;
    } else {
        mx = c;
    }

    // Print the maximum value
    printf("Max(a, b, c) : %d\n", mx);
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

    // Call the function to display the maximum value
    display_max(a, b, c);

    return 0;
}

/*
    void functions returns nothing
*/