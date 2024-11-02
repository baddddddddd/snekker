#include <stdio.h>

int main() {
    // Identify age group
    int age = 22;

    if (age <= 12) {
        puts("You're a kid!");

    } else if (age <= 18) {
        puts("You're a teen!");

    } else if (age <= 60) {
        if (age <= 25) {
            puts("You're a young adult!");
        
        } else {
            puts("You're an adult!");
        }
    
    } else {
        puts("You're old!");
    }

    return 0;
}
