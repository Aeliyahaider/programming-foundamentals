#include <iostream>
using namespace std;

int main() {
    int a = 10;
    float b = 5.5;
    char c = 'A';

    float result1 = a + b;  //int and float
    int result2 = a + c;    //int and char
    float result3 = b - c;  //float and char

    cout << "Result of int + float: " << result1 << endl;
    cout << "Result of int + char: " << result2 << endl;
    cout << "Result of float - char: " << result3 << endl;

    return 0;
}

