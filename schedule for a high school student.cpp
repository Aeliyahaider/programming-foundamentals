#include <iostream>
using namespace std;

int main() {
    int grade, dayOfWeek;

    // Input for grade
    cout << "Enter your grade (9, 10, 11): ";
    cin >> grade;

    // Input for day of the week
    cout << "Enter the day of the week (1 for Monday, 2 for Tuesday, ... 5 for Friday): ";
    cin >> dayOfWeek;

    // Outer switch for grade
    switch (grade) {
    case 9: // Grade 9 schedule
        switch (dayOfWeek) {
        case 1:
            cout << "Grade 9 - Monday: Math" << endl;
            break;
        case 2:
            cout << "Grade 9 - Tuesday: English" << endl;
            break;
        case 3:
            cout << "Grade 9 - Wednesday: History" << endl;
            break;
        case 4:
            cout << "Grade 9 - Thursday: Science" << endl;
            break;
        case 5:
            cout << "Grade 9 - Friday: Physical Education" << endl;
            break;
        default:
            cout << "Invalid day!" << endl;
        }
        break;

    case 10: // Grade 10 schedule
        switch (dayOfWeek) {
        case 1:
            cout << "Grade 10 - Monday: Chemistry" << endl;
            break;
        case 2:
            cout << "Grade 10 - Tuesday: Physics" << endl;
            break;
        case 3:
            cout << "Grade 10 - Wednesday: Math" << endl;
            break;
        case 4:
            cout << "Grade 10 - Thursday: English" << endl;
            break;
        case 5:
            cout << "Grade 10 - Friday: Computer Science" << endl;
            break;
        default:
            cout << "Invalid day!" << endl;
        }
        break;

    case 11: // Grade 11 schedule
        switch (dayOfWeek) {
        case 1:
            cout << "Grade 11 - Monday: Biology" << endl;
            break;
        case 2:
            cout << "Grade 11 - Tuesday: Chemistry" << endl;
            break;
        case 3:
            cout << "Grade 11 - Wednesday: Physics" << endl;
            break;
        case 4:
            cout << "Grade 11 - Thursday: Math" << endl;
            break;
        case 5:
            cout << "Grade 11 - Friday: Economics" << endl;
            break
        default:
            cout << "Invalid day!" << endl;
        }
        break;

    default:
        cout << "Invalid grade!" << endl;
    }

    return 0;
}

