#include <stdio.h>

int main() {
    int k = 7;
    do {
        printf("%d\n", k);
        k--;
    } while (k > 0);
    return 0;
}

/*
    First execution then condition check
    At least once the loop is executed

    Infinite do-while loop example:

    do {
        statement(s);
    } while (1);
*/