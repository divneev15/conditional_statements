// Divneev singh 24070123043 ENtc A2

#include <iostream>
#include<iomanip>
using namespace std;

int main() {
    float marks[5];
    string subjects[] = {"Chemistry", "Mathematics", "Physics", "C-Programming", "Python"};
    float total = 0, percentage;
    string grade;
    bool isValid = true;

    cout << "--------------------------------------" << endl;
    cout << "     Student Marks Entry System    " << endl;
    cout << "---------------------------------------\n";
    
//input from user
    for(int i = 0; i < 5; i++) {
        cout << "Enter marks for " << subjects[i] << " (0 - 100): ";
        cin >> marks[i];

        if(marks[i] < 0 || marks[i] > 100) {
            cout << " Invalid marks entered! Please enter marks between 0 and 100 only.\n";
            isValid = false;
            break;
        }
        total += marks[i];
    }

    if (isValid) {
        percentage = total / 5;

        if (percentage >= 95)
            grade = "O";
        else if (percentage >= 90)
            grade = "A+";
        else if (percentage >= 80)
            grade = "A";
        else if (percentage >= 70)
            grade = "B+";
        else if (percentage >= 60)
            grade = "B";
        else if (percentage >= 50)
            grade = "C";
        else if (percentage >= 40)
            grade = "D";
        else
            grade = "F";

        cout << "\n========== #STUDENT RESULT# ==========\n";
        cout << "Subject           Marks\n";
        cout << "------------------------\n";
        for(int i = 0; i < 5; i++) {
            cout << subjects[i] << ": " << marks[i] << endl;
        }
        cout << "------------------------\n";
        cout << "Total Marks: " << total << "/500\n";
        cout << fixed << setprecision(2);
        cout << "Percentage : " << percentage << "%\n";
        cout << "Grade      : " << grade << endl;

        if (grade == "F")
            cout << "Status     : FAILED" << endl;
        else
            cout << "Status     : PASSED" << endl;

        cout << "---------------------------------" << endl;
    }

    return 0;
}

/*
--------------------------------------
     Student Marks Entry System    
---------------------------------------
Enter marks for Chemistry (0 - 100): 67
Enter marks for Mathematics (0 - 100): 87
Enter marks for Physics (0 - 100): 99
Enter marks for C-Programming (0 - 100): 55
Enter marks for Python (0 - 100): 89

========== #STUDENT RESULT# ==========
Subject           Marks
------------------------
Chemistry: 67
Mathematics: 87
Physics: 99
C-Programming: 55
Python: 89
------------------------
Total Marks: 397/500
Percentage : 79.40%
Grade      : B+
Status     : PASSED
---------------------------------
*/
