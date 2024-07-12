#include <stdio.h>

int main() {
    int i, n = 12;
    for (i = n; i; --i) {
        printf("%d\n", i);
    }
    // 0 means false
    printf("value of i = %d\n", i);
    return 0;
}