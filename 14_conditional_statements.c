#include <stdio.h>

int main() {
    int age;
    printf("Enter age: ");
    scanf("%d", &age);
    if (age >= 18) {
        printf("You can vote\n");
    } else {
        printf("You can't vote\n");
    }
    int day;
    printf("Enter day of the week: ");
    scanf("%d", &day);
    if (day == 7) {
        printf("Half day\n");
    } else if (day == 1) {
        printf("Off-day\n");
    } else {
        printf("Working day\n");
    }
    return 0;
}