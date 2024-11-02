using System;

// Function to calculate the area of a circle
double CalculateCircleArea(double radius) {
    // Area formula using Math.PI
    return Math.PI * (radius * radius);  
}

double radius = 5.0;  // Circle radius
double area = CalculateCircleArea(radius);

// Print area with two decimal places
Console.WriteLine($"Area: {area:F2}");
