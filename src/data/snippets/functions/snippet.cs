using System;

// Function to calculate the area of a circle
double CalculateCircleArea(double radius) {
    // Area formula using Math.PI
    return Math.PI * (radius * radius);  
}

double radius = 5.0;  // Circle radius
Console.WriteLine($"Area: {CalculateCircleArea(radius):F2}");
