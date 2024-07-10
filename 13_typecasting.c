#include <stdio.h>

int main() {
    int n;
    float m = 32.23;
    n = (int) m;
    printf("n = %d\n", n); // 32
    printf("m = %f\n", m); // 32.230000
    char ch = 'x';
    int ascii = (int) ch;
    printf("ascii code of 'x' = %d\n", ascii);
    return 0;
}