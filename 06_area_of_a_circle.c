#include <stdio.h>

int main() {
    float radius, pi = 3.14159;
    printf("Enter radius of the circle: ");
    scanf("%f",&radius);
    printf("Area of the circle: %f\n", pi * radius * radius);
    return 0;
}
