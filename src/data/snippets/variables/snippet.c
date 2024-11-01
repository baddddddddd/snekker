#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // Integer variable
    int count = 10;
    count += 1;
    printf("%d\n", count);

    // Float variable
    float price = 420.99;
    price = price - 0.30;
    printf("%f\n", price);

    // String variable
    char message[100] = "What the sigma";
    strcat(message, " fr fr");
    puts(message);

    // Boolean variable
    bool is_leet = true;
    is_leet = !is_leet;
    printf("%d\n", is_leet);
}