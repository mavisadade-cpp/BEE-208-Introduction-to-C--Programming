#include <iostream>

int main() {
    int num;
    std::cout << "Enter a positive integer: ";
    std::cin >> num;

    if (num > 0 && (num & (num - 1)) == 0) {
        std::cout << num << " is a power of 2.\n";
    } else {
        std::cout << num << " is not a power of 2.\n";
    }
    return 0;
}
