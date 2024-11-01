#include <stdio.h>

int main() {
    // Print numbers from 1 to 20 with even or odd indication
    for (int num = 1; num <= 20; num++) {
        if (num % 2 == 0) {
            printf("%d is even\n", num);
        } else {
            printf("%d is odd\n", num);
        }
    }
    return 0;
}
