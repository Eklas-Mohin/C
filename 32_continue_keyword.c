#include <stdio.h>

int main() {
    int i, n = 29;
    for (i = 1; i < n; ++i) {
        if (i % 3 == 0) {
            continue;
            // Immediately goes to next iteration
            // Below statements are not executed
        }
        printf("%d\n", i); // Executed when i is not a multiple of 3
    }
    return 0;
}
