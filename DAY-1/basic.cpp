#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter a character: ";
    cin >> ch;

    if (ch >= 'a' && ch <= 'z') {
        cout << "It is a lowercase letter." << endl;
    } else if (ch >= 'A' && ch <= 'Z') {
        cout << "It is an uppercase letter." << endl;
    } else if (ch >= '0' && ch <= '9') {
        cout << "It is a digit." << endl;
    } else {
        cout << "It is a special character or other symbol." << endl;
    }

    return 0;
}
