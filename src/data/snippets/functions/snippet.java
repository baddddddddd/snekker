// Function to calculate the area of a circle
public static double calculateCircleArea(double radius) {
    // Area formula using Math.PI
    return Math.PI * (radius * radius);  
}

public static void main(String[] args) {
    double radius = 5.0;  // Circle radius
    System.out.printf("Area: %.2f%n", calculateCircleArea(radius));
}
