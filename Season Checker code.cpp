#include <iostream>
using namespace std;

int main() {
    int month;
    cout << "Enter month (1-12): ";
    cin >> month;

    if (month == 12 || month == 1 || month == 2) {
        cout << "Season: Winter" << endl;
    } else if (month >= 3 && month <= 5) {
        cout << "Season: Spring" << endl;
    } else if (month >= 6 && month <= 8) {
        cout << "Season: Summer" << endl;
    } else if (month >= 9 && month <= 11) {
        cout << "Season: Fall" << endl;
    } else {
        cout << "Invalid month!" << endl;
    }
    return 0;
}

