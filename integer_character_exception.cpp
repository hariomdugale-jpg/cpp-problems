#include<iostream>
using namespace std;
int main() {
    int a;
    char b;
    try {
        cout << "Enter an integer: ";
        cin >> a;
        if (!cin) {          
            throw 1;         
        }
        cout << "Valid integer entered: " << a << endl;
    }
    catch (int) {
        cout << "Invalid integer input!" << endl;
        return 0;
    }
    try {
        cout << "Enter a character: ";
        cin >> b;
        if ((b < 'A' || b > 'Z') && (b < 'a' || b > 'z')) {
            throw 'c';   
        }
        cout << "Valid character entered: " << b << endl;
    }
    catch (char) {
        cout << "Invalid character input!" << endl;
    }
    return 0;
}