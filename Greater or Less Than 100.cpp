// greater_than_100.cpp
#include <iostream>
using namespace std;

int main() {
    int a;
    cout << "Enter a number: ";
    cin >> a;

    if (a >= 100) {
        cout << "Number is Greater Than or Equal to 100" << endl;
    } else {
        cout << "Number is Less Than 100" << endl;
    }

    return 0;
}

