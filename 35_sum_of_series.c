#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("n : ");
    scanf("%d", &n);
    int i = 1;
    while (i <= n) {
        if (i % 2 == 0)
            sum += i;
        ++i;
    }
    printf("Sum of 1 to n (n > 0 and n is even) : %d\n", sum);
    return 0;
}