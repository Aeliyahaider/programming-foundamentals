// number_check.cpp
#include <iostream>
using namespace std;

int main() {
    float num;
    cout << "Enter a number: ";
    cin >> num;

    if (num < 0) {
        cout << "Number is Negative" << endl;
    } else if (num > 0) {
        cout << "Number is Positive" << endl;
    } else {
        cout << "Number is Zero" << endl;
    }

    return 0;
}

