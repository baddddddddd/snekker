#include <iostream>
#include <string>

int main() {
    // String creation
    std::string str1 = "Hello";
    std::string str2 = "World";

    // String concatenation
    std::string combined = str1 + " " + str2;
    std::cout << "Combined String: " << combined << std::endl;

    // String length
    std::cout << "Length: " << combined.length() << std::endl;

    // String indexing
    char first_char = str1[0];
    std::cout << "First character of str1: " << first_char << std::endl;

    // String slicing
    std::string substring = str2.substr(1, 3); // From index 1, length 3
    std::cout << "Substring of str2: " << substring << std::endl;

    // Check for substring
    if (str1.find("lo") != std::string::npos) {
        std::cout << "Does str1 contain 'lo'? Yes" << std::endl;
    } else {
        std::cout << "Does str1 contain 'lo'? No" << std::endl;
    }

    return 0;
}
