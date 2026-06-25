#include <iostream>
using namespace std;

int main() {
    float num1, num2;
    cout << "Enter two floating point numbers: ";
    cin >> num1 >> num2;

    float maxVal = (num1 > num2) ? num1 : num2;
    cout << "The larger value is: " << maxVal << "\n";
    return 0;
}
