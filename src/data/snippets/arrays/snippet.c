#include <stdio.h>
#include <stdlib.h>

int main() {
    int numbers[10] = {10, 20, 30, 40, 50}; // Initial array with space for additional elements
    int size = 5; // Current size of the array

    // Updating an element
    numbers[2] = 35;

    // Appending an element
    if (size < 10) {
        numbers[size] = 60; // Append new element
        size++; // Increase size
    }

    // Inserting an element at index 1
    if (size < 10) {
        for (int i = size; i > 1; i--) {
            numbers[i] = numbers[i - 1]; // Shift elements
        }
        numbers[1] = 25; // Insert new element
        size++;
    }

    // Deleting an element at index 3
    for (int i = 3; i < size - 1; i++) {
        numbers[i] = numbers[i + 1]; // Shift elements
    }
    size--; // Decrease size

    // Print final array
    printf("Final array: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    return 0;
}
