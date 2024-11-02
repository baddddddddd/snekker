#include <stdio.h>
#include <string.h>

int main() {
    // String creation
    char str1[] = "Hello";
    char str2[] = "World";

    // String concatenation
    char combined[100];
    strcpy(combined, str1);
    strcat(combined, " ");
    strcat(combined, str2);
    printf("Combined String: %s\n", combined);

    // String length
    int length = strlen(combined);
    printf("Length: %d\n", length);

    // String indexing
    char first_char = str1[0];
    printf("First character of str1: %c\n", first_char);

    // String slicing
    char substring[4];
    strncpy(substring, str2 + 1, 3); // Copy characters from index 1 to 3
    substring[3] = '\0'; // Null-terminate the substring
    printf("Substring of str2: %s\n", substring);

    // Check for substring
    if (strstr(str1, "lo")) {
        printf("Does str1 contain 'lo'? Yes\n");
    } else {
        printf("Does str1 contain 'lo'? No\n");
    }

    return 0;
}
