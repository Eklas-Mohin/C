#include <stdio.h>

int main() {
    int n = 25;
    for (int i = 1; i <= 25 ; ++i) {
        if (i % 2 == 1) {
            printf("%d\n", i);
            // printing only odd numbers
        }
    }
    if (n % 2 == 0) {
        n = n - 1;
    }
    for (int i = 1, j = n; i <= 25 && j >= 1; ++i, --j) {
        if (i % 2 == 1) {
            printf("%d  %d\n", i, j);
        }
    }
    return 0;
}

/*
    for (initialization; condition(s); increment/decrement){
        statement(s);
    }
*/

/*
    Infinite for loop example
    for (; ;) {
        statement(s);
    }
*/