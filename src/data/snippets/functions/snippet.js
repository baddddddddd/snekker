// Function to calculate the area of a circle
function calculateCircleArea(radius) {
    // Area formula using Math.PI
    return Math.PI * (radius ** 2);  
}

let radius = 5.0;  // Circle radius
console.log(`Area: ${calculateCircleArea(radius).toFixed(2)}`);
