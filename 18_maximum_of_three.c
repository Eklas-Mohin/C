#include <stdio.h>

int main() {
    int v1, v2, v3;
    printf("v1: ");
    scanf("%d", &v1);
    printf("v2: ");
    scanf("%d", &v2);
    printf("v3: ");
    scanf("%d", &v3);
    if (v1 >= v2 && v1 >= v3) {
        printf("max(v1, v2, v3) : %d\n", v1);
    } else if (v2 >= v1 && v2 >= v3) {
        printf("max(v1, v2, v3) : %d\n", v2);
    } else {
        printf("max(v1, v2, v3) : %d\n", v3);
    }
    return 0;
}