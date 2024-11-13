#include <iostream>
using namespace std;

int main() {
    double subj1, subj2, subj3, subj4;
    double maxmarks = 100;

    cout << "Student Grade Management System" << endl;  
    cout << "--------------------------------" << endl;

    cout << "Enter marks for Subject 1 (out of 100): ";
    cin >> subj1;

    cout << "Enter marks for Subject 2 (out of 100): ";
    cin >> subj2;

    cout << "Enter marks for Subject 3 (out of 100): ";
    cin >> subj3;

    cout << "Enter marks for Subject 4 (out of 100): ";
    cin >> subj4;

    double totalmarks = subj1 + subj2 + subj3 + subj4;
    double percentage = totalmarks / (4 * maxmarks) * 100;
    string grade;

    // Assigning grade based on percentage
    if (percentage >= 90) {
        grade = "A+";
    } else if (percentage >= 80) {
        grade = "A";
    } else if (percentage >= 70) {
        grade = "B";
    } else if (percentage >= 60) {
        grade = "C";
    } else if (percentage >= 50) {
        grade = "D";
    } else {
        grade = "E";
    }

    // Displaying the final result
    cout << "\n\t Final Result " << endl;
    cout <<"---------------------------------"<<endl;
    cout << "Total Marks: " << totalmarks << " / 400" << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;

    // Check if the student passed or failed each subject
    if (subj1 >= 33 && subj2 >= 33 && subj3 >= 33 && subj4 >= 33) {
        cout << "Status: Pass" << endl;
    } else {
        cout << "Status: Fail" << endl;
    }

    return 0;
}

