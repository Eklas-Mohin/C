#include <stdio.h>

int main() {
    int i = 0, n = 25;
    while (i < n) {
        printf("%d\n", i);
        ++i;
    }
    // prints 0 to 24
    return 0;
}

/*
    while (i < n) {
        printf("%d\n", i);
    }
    Infinite loop because value
    of i is not incremented

    Another example of infinite loop
    
    while (1) {
        statement(s);
    }

*/