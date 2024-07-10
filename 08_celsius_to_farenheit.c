#include <stdio.h>

int main() {
    float c, f;
    printf("Enter Temperature in Celsius: ");
    scanf("%f", &c);
    f = ((9 * c) / 5 ) + 32;
    printf("Temperature in Farenheit: %f\n", f);
    return 0;
}