// Function to calculate the area of a circle
public static double calculateCircleArea(double radius) {
    // Area formula using Math.pow()
    return Math.PI * Math.pow(radius, 2);  
}

public static void main(String[] args) {
    double radius = 5.0;  // Circle radius
    double area = calculateCircleArea(radius);

    // Print area with two decimal places
    System.out.printf("Area: %.2f%n", area);
}