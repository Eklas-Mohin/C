/**
*    author: mohin
**/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n, g = 0; // Variables for user input and guess count
    printf("The number is between 1 to 100 inclusive\nGuess The Number : \n");
    srand(time(NULL)); 
    int random_number = (rand() % 100) + 1; // Generate random number between 1 and 100
    
    while (1) { // Infinite loop until correct guess
        printf("Guess %d : ", g + 1);
        scanf("%d", &n); // Read user input for guess
        g++; // Increment guess count

        if (n == random_number) {
            printf("Correct guess in %d attempt\n", g);
            break; // Break out of loop if guess is correct
        } else if (n < random_number) {
            printf("Greater than that\n"); // Prompt if guess is too low
        } else {
            printf("Less than that\n"); // Prompt if guess is too high
        }
    }

    return 0;
}

/* 
    srand(time(NULL)); is important 
    to get different numbers otherwise 
    the generated number will be the 
    same every time.
*/