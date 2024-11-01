#include <stdio.h>

// Function to calculate the area of a circle
float calculateCircleArea(float radius) {
    return 3.14159f * (radius * radius); // Area formula
}

int main() {
    float radius = 5.0f; // Circle radius
    printf("The area of the circle with radius %.2f is %.2f\n", radius, calculateCircleArea(radius));
    return 0;
}
