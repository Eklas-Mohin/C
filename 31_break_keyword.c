#include <stdio.h>

int main() {
    int i, n = 73;
    for (i = 1; i < n; ++i) {
        printf("%d\n", i);
        if (i == 10) {
            break; // Exits loop immediately
            //  No further condition check
        }
    }
    printf("value of i = %d\n", i);
    return 0;
}