/**
*    author: mohin
**/

#include <stdio.h>

int main() {
    int n;
    printf("Enter n (n >= 0 and n <= 20): ");
    scanf("%d", &n);
    long long int fact = 1;
    if (n > 20 || n < 0) {
        printf("Error :(\n");
        return 0;
    }
    for (int i = 1; i <= n; ++i) {
        fact = fact * i;
    }
    printf("%d! = %lld\n", n, fact);
    return 0;
}

/*
    Factorial of 0 is 1 that means 0! = 1

    Proof: 
    Let n be any positive integer,
    
        n! = n * (n - 1) * (n - 2) * .... * 1
    =>  n! = n * (n - 1)!

    Now, putting n = 1, gives us
        1! = 1 * 0!
    =>  1 = 0!

    so, 0! = 1 (proved)
*/