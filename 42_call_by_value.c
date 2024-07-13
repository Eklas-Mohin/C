/**
*    author: mohin
**/

#include <stdio.h>

// Function to swap two integers (passed by value, so original values won't change)
void swap(int a, int b) {
    int temp = a;
    a = b; 
    b = temp;
    
    // Print swapped values inside the swap function
    printf("After swapping in swap function : \n");
    printf("Inside swap function \na  =  %d\nb  =  %d\n", a, b);
}

int main() {
    int a, b;

    printf("Enter value for a : ");
    scanf("%d", &a);

    printf("Enter value for b : ");
    scanf("%d", &b);

    // Call the swap function (values will not actually swap in main due to pass by value)
    swap(a, b);

    // Print values of a and b in main to show they remain unchanged
    printf("Inside main function\na  =  %d\nb  =  %d\n", a, b);

    return 0;
}

/* call by value = pass by value */