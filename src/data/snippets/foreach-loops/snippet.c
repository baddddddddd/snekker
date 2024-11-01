#include <stdio.h>

int main() {
    // Initialize an array of numbers
    int numbers[] = {5, 12, 15, 20, 25};
    int length = sizeof(numbers) / sizeof(numbers[0]);

    // Print each number using a for-each loop
    for (int i = 0; i < length; i++) {
        printf("Number: %d\n", numbers[i]);
    }
    
    return 0;
}
