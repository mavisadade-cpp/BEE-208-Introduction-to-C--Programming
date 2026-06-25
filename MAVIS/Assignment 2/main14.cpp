#include <iostream>
#include <string>
#include <sstream>
#include <iomanip>

int main() {
    std::string binaryStr;
    std::cout << "Enter a binary number string: ";
    std::cin >> binaryStr;

    try {
        // Convert to intermediate decimal integer first
        int decimalVal = std::stoi(binaryStr, nullptr, 2);

        // Convert decimal to Octal and Hexadecimal string streams
        std::stringstream octalStream, hexStream;
        octalStream << std::oct << decimalVal;
        hexStream << std::hex << std::uppercase << decimalVal;

        // Display all system formats
        std::cout << "\n--- Conversions ---\n";
        std::cout << "Decimal:     " << decimalVal << "\n";
        std::cout << "Octal:       " << octalStream.str() << "\n";
        std::cout << "Hexadecimal: " << hexStream.str() << "\n";

    } catch (...) {
        std::cout << "Error: Invalid binary input format.\n";
    }
    return 0;
}
