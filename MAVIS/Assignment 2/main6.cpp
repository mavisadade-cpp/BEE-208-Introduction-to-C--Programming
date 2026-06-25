#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    cin >> str;

    if (str.find('a') != string::npos) {
        cout << "Contains 'a'\n";
    } else {
        cout << "Does not contain 'a'\n";
    }
    return 0;
}
