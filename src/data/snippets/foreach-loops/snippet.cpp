#include <iostream>
#include <vector>

int main() {
    // Initialize a vector of numbers
    std::vector<int> numbers = {5, 12, 15, 20, 25};

    // Print each number using a for-each loop
    for (const int& num : numbers) {
        std::cout << "Number: " << num << std::endl;
    }

    return 0;
}
