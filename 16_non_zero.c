#include <stdio.h>

int main() {
    // Non-zero means true in C
    printf("Anything except 0 is true in C\n");
    if (1) {
        printf("1: This statement will be executed\n");
    }
    if (6) {
        printf("6: This statement will be executed\n");
    }
    if (-6) {
        printf("-6: This statement will be executed\n");
    }
    if (0) {
        printf("0: This statement won't be executed\n");
    }
    if ('c') {
        printf("'c': This statement will be executed\n");
    }
    if ("False or True doesn't matter") {
        printf("False or True: This statement will be executed\n");
    }
    return 0;
}