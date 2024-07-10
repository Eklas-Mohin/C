#include <stdio.h>

int main() {
    int a = 3, b = 6, c = 9;
    printf("a = %d  b = %d  c = %d\n", a, b, c);
    printf("a * b / c = %d\n", a * b / c); // (a * b) / c
    printf("a / b * c = %d\n", a / b * c); // (a / b) * c
    int r = 3 * b / 2 * c + 7 * a;
    printf("3 * b / 2 * c + 7 * a = %d\n", r); // 102
    r = (3 * b) / (2 * c) + (7 * a);
    printf("(3 * b) / (2 * c) + (7 * a) = %d\n", r);
    return 0;
}

 /* 
        r = 3 * 6 / 2 * 9 + 7 * 3
        r = 18 / 2 * 9 + 7 * 3
        r = 9 * 9 + 7 * 3
        r = 81 + 21
        r = 102
*/   

/*
        Priority           Operators
         
        1st                 * / %

        2nd                 + -

        3rd                  =

        Operator Associativity

        x * y / z -->  (x * y) / z

        x / y * z -->  (x / y) * z

        *, /, % follows left to right associativity
*/