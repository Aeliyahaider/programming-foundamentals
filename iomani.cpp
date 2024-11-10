#include <iostream>
#include <iomanip> // Include iomanip library
using namespace std;

int main() {
    cout << std::setw(10) << std::setfill('*') << "Name" 
         << setw(10) << "Score" << endl;

    cout << std::setw(10) << "Aeliya" 
         << std::setw(10) << std::right << 95 << endl;

    cout << std::setw(10) << "Bilal" 
         << std::setw(10) << std::right << 87 << endl;

    cout << std::fixed << std::setprecision(2);
    cout << "\nAverage: " << 91.6667 << endl;  // Output with 2 decimal places

    return 0;
}

