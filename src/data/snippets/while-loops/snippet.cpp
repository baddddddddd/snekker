#include <iostream>

int main() {
    int count = 10;  // Starting countdown number

    while (count >= 0) {
        // Skip even numbers
        if (count % 2 == 0) {
            count--;
            continue;
        }

        // Print the current count
        std::cout << count << std::endl;

        count--; // Decrement the counter
    }

    return 0;
}
