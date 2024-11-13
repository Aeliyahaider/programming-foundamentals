// voting_eligibility.cpp
#include <iostream>
using namespace std;

int main() {
    int age = 16;
    
    if (age >= 18) {
        cout << "You Are Eligible to Vote" << endl;
    } else {
        cout << "You Are Not Eligible to Vote" << endl;
    }
    
    return 0;
}

