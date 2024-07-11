#include <stdio.h>

int main() {
    int a = 10;
    if (a = 11) { // 11 is asigned to a and returns true
        printf("a is 11\n");
    } else {
        printf("a is not 11\n");
    }
    if (a == 11) {
        printf("a is 11\n");
    } else {
        printf("a is not 11\n");
    }
    a = 10;
    if (a == 11) {
        printf("a is 11\n");
    } else {
        printf("a is not 11\n");
    }
    return 0;
}

/*  
    Output:
        a is 11
        a is 11
        a is not 11
*/