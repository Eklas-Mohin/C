#include <stdio.h>

int main() {
    int a, b;
    printf("Enter a: ", &a);
    scanf("%d", &a);
    printf("Enter b: ", &b);
    scanf("%d", &b);
    a > b ? printf("a > b\n") : printf("a <= b\n");
    return 0;
}