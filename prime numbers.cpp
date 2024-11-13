#include <iostream>
using namespace std;

bool isPrime(int num) {
    if (num <= 1) return false; // 0 and 1 are not prime
    for (int i = 2; i * i <= num; i++) 
        if (num % i == 0) return false; // Found a divisor
    return true; // No divisors found, prime
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;
    cout << num << (isPrime(num) ? " is" : " is not") << " a prime number." << endl;
    return 0;
}

