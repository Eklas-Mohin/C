/**
*    author: mohin
**/

#include <stdio.h>

int main() {
    int n = 4;
    printf("%d %d %d\n", n, ++n, n++);
    return 0;
}

/*
    Looks like output should be 
    4  5  5

    But no, output is 
    6  6  4

    Now the question is, why?

    Ans : Evaluation order is right to left,
    when the variable is same.
*/