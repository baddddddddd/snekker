// Identify age group
let age = 22;

if (age <= 12) {
    console.log("You're a kid!");

} else if (age <= 18) {
    console.log("You're a teen!");

} else if (age <= 60) {
    if (age <= 25) {
        console.log("You're a young adult!");

    } else {
        console.log("You're an adult!");
    }
    
} else {
    console.log("You're old!");
}
