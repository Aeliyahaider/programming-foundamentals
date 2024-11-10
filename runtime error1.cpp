#include <iostream>
using namespace std;

int main() {
    int a = 10;   //runtime error because 10 is not % by 0;
    int b = 0;    
    cout << " your result " << a / b << endl;
    
    
    {
    int a = 10;
    int b = 0;

    if (b != 0) {
        cout << "Result: " << a / b << endl;
    } else {
        cout << "Division by zero is not allowed." << endl;
    }

    return 0;
   }
}



