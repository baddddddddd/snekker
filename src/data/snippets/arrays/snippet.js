// Initialize an array of numbers
let numbers = [10, 20, 30, 40, 50];

// Updating an element
numbers[2] = 35;

// Appending an element
numbers.push(60);

// Inserting an element at index 1
numbers.splice(1, 0, 25);

// Deleting an element at index 3
numbers.splice(3, 1);

// Print final array
console.log("Final array:", numbers);
