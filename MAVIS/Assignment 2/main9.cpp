#include <iostream>

int main() {
    int num;
    std::cout << "Enter an integer: ";
    std::cin >> num;

    if ((num % 2 != 0) && (num % 3 == 0)) {
        std::cout << "The number is odd and divisible by 3.\n";
    } else {
        std::cout << "Condition not met.\n";
    }
    return 0;
}
