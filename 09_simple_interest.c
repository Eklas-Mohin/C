#include <stdio.h>

int main() {
    float p, r, t, si;
    printf("Enter pricipal amount: ");
    scanf("%f", &p);
    printf("Enter interest rate: ");
    scanf("%f", &r);
    printf("Enter time in years: ");
    scanf("%f", &t);
    si = (p * r * t) / 100.00;
    printf("Simple interest: %f\n", si);
    printf("Total: %f", p + si);
    return 0;
}

// Simple Interest = (p × r × t) / 100