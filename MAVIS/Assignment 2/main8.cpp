#include <iostream>

int main() {
    int num1, num2;
    std::cout << "Enter two integers: ";
    std::cin >> num1 >> num2;

    int maxVal = (num1 > num2) ? num1 : num2;
    std::cout << "The larger value is: " << maxVal << "\n";
    return 0;
}
