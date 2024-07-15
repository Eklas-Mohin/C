/**
*    author: mohin
**/

#include <stdio.h>

int main() {
    int n;
    printf("Enter value for n : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("%d ", j);
        }
        printf("\n");
    }
    return 0;
}

/*
    1
    1 2
    1 2 3
    1 2 3 4
*/