#include <stdio.h>

int main() {
    int k;
    printf("Enter k: ");
    scanf("%d", &k);
    if (k >= 18 && k <= 60) {
        printf("True\n");
    } else {
        printf("False\n");
    }
    if (k % 5 == 0 && k % 7 == 0) {
        printf("k is divisible by both 5 and 7\n");
    } 
    if (k % 5 == 0 || k % 7 == 0) {
        printf("k is divisible by 5 or 7\n");
    } 
    if (!(k % 5 == 0)) {
        printf("k is not divisible by 5\n");
    } else {
        printf("k is divisible by 5\n");
    }
    printf("1 && 0 : %d\n", 1 && 0);
    printf("1 || 0 : %d\n", 1 || 0);
    printf("!(1 && 0) : %d\n", !(1 && 0));
    printf("!(1 || 0) : %d\n", !(1 || 0));
    return 0;
}

/*
        Logical Operators
            &&   and
            ||   or
            !    not
*/