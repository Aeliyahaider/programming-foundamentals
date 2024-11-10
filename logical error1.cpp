#include <iostream>
using namespace std;

int main() {
	
    int a = 1, b = 12, c = 10;
    int average = (a + b + c) / 2; 

    cout << "Average: " << average << endl;
    // the will be output is 11.5
    {
	
    int a = 5, b = 10, c = 1;
    int average = (a + b + c) / 3;

    cout << "Average: " << average << endl;
    // the will be output is 5...?
    return 0;
    }
}

