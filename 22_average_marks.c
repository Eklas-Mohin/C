#include <stdio.h>

int main() {
    int phy, che, math;
    printf("Physics: ");
    scanf("%d", &phy);
    printf("Chemistry: ");
    scanf("%d", &che);
    printf("Mathematics: ");
    scanf("%d", &math);
    float avg = (phy + che + math) / 3.00;
    printf("Average = %0.2f\n", avg);
    return 0;
}