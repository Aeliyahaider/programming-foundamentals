
//Aeliya Haider
START
    Enter a number between 1 and 7
    variable "day"
    
    SWITCH day:
        CASE 1: Print "Monday"
        CASE 2: Print "Tuesday"
        CASE 3: Print "Wednesday"
        CASE 4: Print "Thursday"
        CASE 5: Print "Friday"
        CASE 6: Print "Saturday"
        CASE 7: Print "Sunday"
        DEFAULT: Print "Wrong input, please enter a number between 1 and 7"
    END SWITCH
END


#include <iostream>
using namespace std;

int main() {
    int day;
    cout << "Enter a number between 1 and 7: ";
    cin >> day;
    switch(day) {
        case 1:
            cout << "Monday" << endl;
            break;
        case 2:
            cout << "Tuesday" << endl;
            break;
        case 3:
            cout << "Wednesday" << endl;
            break;
        case 4:
            cout << "Thursday" << endl;
            break;
        case 5:
            cout << "Friday" << endl;
            break;
        case 6:
            cout << "Saturday" << endl;
            break;
        case 7:
            cout << "Sunday" << endl;
            break;
        default:
            cout << "Wrong input, please enter a number between 1 and 7" << endl;
    }

    return 0;
}

