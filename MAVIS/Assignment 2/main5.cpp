#include <iostream>
#include <cctype>

int main() {
    char ch;
    std::cout << "Enter a character: ";
    std::cin >> ch;

    // Checks if the character is an uppercase letter using logical AND
    if (std::isupper(ch) && (ch >= 'A' && ch <= 'Z')) {
        std::cout << "Uppercase letter\n";
    } else {
        std::cout << "Not an uppercase letter\n";
    }
    return 0;
}
