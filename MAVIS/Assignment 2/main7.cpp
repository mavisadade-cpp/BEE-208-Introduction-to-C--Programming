#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num % 2 != 0) {
        cout << "Odd number\n";
    } else {
        std::cout << "Even number\n";
    }
    return 0;
}
