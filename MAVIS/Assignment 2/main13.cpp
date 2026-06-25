#include <iostream>
#include <string>
using namespace std;

int main() {
    string binary;
    cout << "Enter binary string: ";
    cin >> binary;
    int decimal = 0, base = 1;
    for (int i = binary.length() - 1; i >= 0; i--) {
        if (binary[i] == '1')
            decimal += base;
        base *= 2;
    }
    cout << "Decimal: " << decimal << endl;
    return 0;
}
