/**
*    author: mohin
**/

#include <stdio.h>
#include <math.h>

int main() {
    double side;
    printf("Enter side of the square : ");
    scanf("%lf", &side);
    printf("Area of the square : %f\n", pow(side, 2.0));
    return 0;
}

/*
    base^power = pow(base, power);
    x^y = pow(x, y);
    The pow() function calculates 
    the value of x to the power of y

    The pow() function takes values 
    of type double as its arguments 
    and returns a value of type double.
    But the function does not always
    work with integers.math.h heading 
    is a must to use pow() function.
*/