// vowel_checker.cpp
#include <iostream>
using namespace std;

int main() {
    char A;
    cout << "Enter a character: ";
    cin >> A;

    if (A == 'a' || A == 'e' || A == 'i' || A == 'o' || A == 'u' || 
        A == 'A' || A == 'E' || A == 'I' || A == 'O' || A == 'U') {
        cout << "Character is a Vowel" << endl;
    } else {
        cout << "Character is not a Vowel" << endl;
    }

    return 0;
}

