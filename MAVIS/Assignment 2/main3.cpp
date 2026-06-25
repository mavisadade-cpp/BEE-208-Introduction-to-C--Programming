#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (str == "hello") {
        cout << "Hello!\n";
    } else {
        cout << "Goodbye!\n";
    }
    return 0;
}
