/**
*    author: mohin
**/

#include <stdio.h>

int main() {
    int n, curr = 1;
    printf("Enter value for n : ");
    scanf("%d", &n);
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= i; ++j) {
            printf("%d ", curr);
            curr += 1;
        }
        printf("\n");
    }
    return 0;
}

/*
    1
    2 3
    4 5 6
    7 8 9 10
*/