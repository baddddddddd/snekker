#include <iostream>
#include <cmath>

// Function to calculate the area of a circle
double calculate_circle_area(double radius) {
    // Area formula using M_PI from cmath
    return M_PI * (radius * radius);  
}

int main() {
    double radius = 5.0;  // Circle radius
    std::cout << "Area: " << calculate_circle_area(radius) << std::endl;
    return 0;
}
