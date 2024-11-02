#include <iostream>
#include <vector>

int main() {
    std::vector<int> numbers = {10, 20, 30, 40, 50};

    // Updating an element
    numbers[2] = 35;

    // Appending an element
    numbers.push_back(60);

    // Inserting an element at index 1
    numbers.insert(numbers.begin() + 1, 25);

    // Deleting an element at index 3
    numbers.erase(numbers.begin() + 3);

    // Print final array
    std::cout << "Final array: ";
    for (int number : numbers) {
        std::cout << number << " ";
    }
    std::cout << std::endl;

    return 0;
}
