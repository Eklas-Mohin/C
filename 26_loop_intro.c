#include <stdio.h>

int main() {
    int i, n = 10;
    for (i = 0; i < n; ++i) {
        printf("Happy Coding!\n");
    }
    i = 0;
    while (i < n) {
        printf("Happy Coding\n");
        ++i; // Same as i = i + 1
    }
    return 0;
}