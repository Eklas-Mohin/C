#include <stdio.h>

int main() {
    float r, h, v, pi = 3.14159;
    printf("Enter radius of the cylinder: ");
    scanf("%f",&r);
    printf("Enter height of the cylinder: ");
    scanf("%f",&h);
    v = pi * r * r * h;
    printf("Volume of the cylinder: %f\n", v);
    return 0;
}

// V = π * (r^2) * h