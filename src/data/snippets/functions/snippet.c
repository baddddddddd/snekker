#include <stdio.h>
#include <math.h>

// Function to calculate the area of a circle
double calculate_circle_area(double radius) {
    // Area formula using M_PI from math.h
    return M_PI * (radius * radius);  
}

int main() {
    double radius = 5.0;  // Circle radius
    printf("Area: %.2f\n", calculate_circle_area(radius));
    return 0;
}
