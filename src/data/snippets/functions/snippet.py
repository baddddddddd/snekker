import math

# Function to calculate the area of a circle
def calculate_circle_area(radius):
    # Area formula using pi from math module
    return math.pi * (radius ** 2)  

radius = 5.0  # Circle radius
print(f"Area: {calculate_circle_area(radius):.2f}")
