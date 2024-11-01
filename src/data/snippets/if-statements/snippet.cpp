#include <iostream>

int main() {
    // Identify age group
    int age = 22;

    if (age <= 12) {
        std::cout << "You're a kid!" << std::endl;

    } else if (age <= 18) {
        std::cout << "You're a teen!" << std::endl;

    } else if (age <= 60) {
        if (age <= 25) {
            std::cout << "You're a young adult!" << std::endl;

        } else {
            std::cout << "You're an adult!" << std::endl;
        }
        
    } else {
        std::cout << "You're old!" << std::endl;
    }

    return 0;
}
