#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("n : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        sum += i;
    }
    printf("Sum of 1 to n (n > 0) : %d\n", sum);
    return 0;
}