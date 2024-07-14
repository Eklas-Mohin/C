/**
*    author: mohin
**/

#include <stdio.h>

// Function to calculate the force of attraction
float attractionForce(float mass, float gravity) {
    float force = mass * gravity;
    return force;
}

int main() {
    float mass;
    float gravity_of_earth = 9.8;

    printf("Enter mass(kg) of the object: ");
    scanf("%f", &mass);

    float force = attractionForce(mass, gravity_of_earth);
    printf("Force of attraction exerted by Earth: %.2fN\n", force);

    return 0;
}
