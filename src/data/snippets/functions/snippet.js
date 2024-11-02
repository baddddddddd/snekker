// Function to calculate the area of a circle
function calculateCircleArea(radius) {
    // Area formula using Math.pow()
    return Math.PI * Math.pow(radius, 2);  
}

let radius = 5.0;  // Circle radius
let area = calculateCircleArea(radius);

// Print area with two decimal places
console.log(`Area: ${area.toFixed(2)}`);
