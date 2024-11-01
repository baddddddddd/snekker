#include <iostream>

int main() {
    // Print numbers from 1 to 20 with even or odd indication
    for (int num = 1; num <= 20; num++) {
        if (num % 2 == 0) {
            std::cout << num << " is even" << std::endl;
        } else {
            std::cout << num << " is odd" << std::endl;
        }
    }
    return 0;
}
