#include <stdio.h>
#include <math.h>

// Function to calculate the area of a circle
double calculate_circle_area(double radius) {
    // Area formula using pow() for exponentiation
    return M_PI * pow(radius, 2); 
}

int main() {
    double radius = 5.0;  // Circle radius
    double area = calculate_circle_area(radius);

    // Print area with two decimal places
    printf("Area: %.2f\n", area);
    return 0;
}
