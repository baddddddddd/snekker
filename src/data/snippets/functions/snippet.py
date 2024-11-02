import math

# Function to calculate the area of a circle
def calculate_circle_area(radius):
    # Area formula using exponentiation
    return math.pi * (radius ** 2)  

radius = 5.0  # Circle radius
area = calculate_circle_area(radius)

# Print area with two decimal places
print(f"Area: {area:.2f}")
