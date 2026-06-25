#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "Enter values for a and b: ";
    cin >> a >> b;

    a = a ^ b;
    b = a ^ b;
    a = a ^ b;

    cout << "After swapping: a = " << a << ", b = " << b << "\n";
    return 0;
}
