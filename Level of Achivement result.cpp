#include <iostream>
using namespace std;

int main() {
    int score;
    cout << "Enter your score: ";
    cin >> score;

    if (score >= 90) {
        cout << "Achievement: Excellent" << endl;
    } else if (score >= 75) {
        cout << "Achievement: Very Good" << endl;
    } else if (score >= 50) {
        cout << "Achievement: Good" << endl;
    } else {
        cout << "Achievement: Needs Improvement" << endl;
    }
    return 0;
}

