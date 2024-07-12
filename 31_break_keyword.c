#include <stdio.h>

int main() {
    int i, n = 73;
    for (i = 1; i < n; ++i) {
        printf("%d\n", i);
        if (i == 10) {
            break; // Exits loop immediately
            // No further increment/decrement
            // No further condition check
        }
    }
    printf("value of i = %d\n", i); // i = 10
    return 0;
}