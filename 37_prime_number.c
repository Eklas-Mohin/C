/**
*    author: mohin
**/

#include <stdio.h>
#include <math.h>

int main() {
    int n, is_prime = 1;
    printf("Enter n (n > 0) : ");
    scanf("%d", &n);
    
    // Check if n is less than 1 (invalid input for prime check)
    if (n < 1) {
        printf("Invalid Input :(\n");
        return 0;
    }
    
    // Special case for 1
    if (n == 1) {
        printf("1 is not a prime number\nIt has only 1 factor\n");
        return 0;
    }
    
    // Loop to check for prime
    for (int i = 2; i * i <= n; ++i) {
        if (n % i == 0) {
            is_prime = 0;  // If divisible, mark as not prime
            break;         // No need to check further
        }
    }
    
    // Output based on is_prime flag
    if (is_prime) {
        printf("%d is a prime number\n", n);
    } else {
        printf("%d is not a prime number\n", n);
    }
    
    return 0;
}

/*
    Prime Number :
    A prime number (or a prime) is a natural number 
    which has exactly 2 factors.

    Factor :
    A number or algebric expression that divides 
    another number or expression evenly—i.e., with no remainder.

    The numbers which are not prime is called composite number.
    By definition 1 is neither prime nor prime.

    1 is not a prime number because it can not be divided by any
    other integer except for 1 and itself. The only factor of 1 is 1.
    On the other hand, 1 is also not a composite number because it 
    can not be divided by any other integer except for 1 and itself. 
    In conclusion, the number 1 is neither prime nor composite.
*/