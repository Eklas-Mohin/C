#include <stdio.h>

int main() {
    int a = 3.5; // Demoted to floor value
    printf("a = %d\n", a); // 3
    float b = 8;
    printf("b = %f\n", b); // 8.000000
    int k = 3.0 / 9;
    printf("k = %d\n", k); // 0
    return 0;
}