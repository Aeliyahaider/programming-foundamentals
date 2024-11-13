// even_odd_check.cpp
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    if (a % 2 == 0) {
        cout << "Your number is Even" << endl;
    } else {
        cout << "Your number is Odd" << endl;
    }

    return 0;
}

