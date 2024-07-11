#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character a-z or A-Z : ");
    scanf("%c", &ch);
    if (ch >= 'a' && ch <= 'z') {
        printf("Lowercase\n");
    } else if (ch >= 'A' && ch <= 'Z') {
        printf("Uppercase\n");
    } else {
        printf("Something went wrong :(\n");
    }
    return 0;
}