/**
*    author: mohin
**/

#include <stdio.h>

// Function to swap the values of two integers using pointers
void swap(int *x, int *y) {
    int temp = *x;  // Store the value of x in a temporary variable
    *x = *y;        // Assign the value of y to x
    *y = temp;      // Assign the value of temp (original x) to y
}

int main() {
    int x = 7, y = 14;
    printf("Before Swapping  x = %d  y = %d\n", x, y);
    swap(&x, &y);  // Call the swap function with the addresses of x and y
    printf("After Swapping  x = %d  y = %d\n", x, y);
    return 0;  
}
