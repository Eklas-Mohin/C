/**
*    author: mohin
**/

#include <stdio.h>

// Function to compute the factorial of a number
// Uses recursion to compute the factorial
long long factorial(int n) {
    // Base case: factorial of 0 or 1 is 1
    if (n == 0 || n == 1) {
        return 1LL;
    }
    // Recursive case: n! = n * (n-1)!
    return 1LL * n * factorial(n - 1);
}

int main() {
    int n;  
    long long fact;
    printf("Enter value for n : ");
    scanf("%d", &n);
    fact = factorial(n);
    printf("%d! = %lld\n", n, fact);
    return 0;
}

/*
    1LL means data type is long long.

    Recursion involves calling a function 
    from within the same function, and without
    a base case, the function will continue to 
    call itself indefinitely, eventually 
    leading to a stack overflow error.
*/