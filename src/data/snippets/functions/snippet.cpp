#include <iostream>
#include <iomanip>
#include <cmath>

// Function to calculate the area of a circle
double calculate_circle_area(double radius) {
    // Area formula using pow() for exponentiation
    return M_PI * pow(radius, 2); 
}

int main() {
    double radius = 5.0;  // Circle radius
    double area = calculate_circle_area(radius);

    // Print area with two decimal places
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Area: " << area << std::endl;
    return 0;
}
