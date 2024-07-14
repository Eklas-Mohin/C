/**
*    author: mohin
*    description: Program to compute Fibonacci series
*    and a specific Fibonacci number.
**/

#include <stdio.h>

long long getFibonacci(long long n) {
    if (n == 0 || n == 1) {
        return n;
    }
    return (getFibonacci(n - 1) + getFibonacci(n - 2));
}

int main() {
    long long n;
    printf("Fibonacci series : ");
    printf("0, 1, 1, 2, 3, 5, 8, 13, 21, 34, ...\n");
    printf("Enter value for n : ");
    scanf("%lld", &n);
    long long fib = getFibonacci(n);
    printf("Fibonacci(%lld) = %lld\n", n, fib);
    return 0;
}
