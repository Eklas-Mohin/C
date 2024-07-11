#include <stdio.h>

int main() {
    int a;
    printf("Enter a: ");
    scanf("%d", &a);
    if (a % 2 == 0) {
        printf("a is even\n");
    } else {
        printf("a is odd\n");
    }
    if (a > 10) {
        printf("a is greater than 10\n");
    }
    if (a < 10) {
        printf("a is not greater than 10\n");
    }
    if (a >= 10) {
        printf("a is greater than or equal to 10\n");
    }
    if (a <= 10) {
        printf("a is less than or equal to 10\n");
    }
    if (a != 0) {
        printf("a is not equal to 10\n");
    }
    return 0;
}

/*
        Relational Operators
        ==  Equal
        >   Greater than
        <   Less than
        >=  Greater than equal
        <=  Less than equal
        !=  Not equal
*/