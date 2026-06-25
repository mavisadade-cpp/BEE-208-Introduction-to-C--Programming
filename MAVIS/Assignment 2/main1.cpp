#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double radius;
    const double PI = 3.141592653589793;
    cout << "Enter radius: ";
    cin >> radius;

    double area = PI * pow(radius, 2);
    cout << "Area: " << area << "\n";
    return 0;
}
