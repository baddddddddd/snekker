// String creation
let str1 = "Hello";
let str2 = "World";

// String concatenation
let combined = str1 + " " + str2;
console.log("Combined String:", combined);

// String length
console.log("Length:", combined.length);

// String indexing
let firstChar = str1[0];  // Get the first character of str1
console.log("First character of str1:", firstChar);

// String slicing
let substring = str2.slice(1, 4); // Get substring from str2 (from index 1 to 3)
console.log("Substring of str2:", substring);

// Check for substring
let contains = str1.includes("lo");
console.log("Does str1 contain 'lo'?", contains ? "Yes" : "No");
