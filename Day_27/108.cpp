#include <iostream>
using namespace std;

int main() {
    string name;
    int roll;
    int m1, m2, m3, m4, m5;
    int total;
    float percentage;

    cout << "Enter Student Name: ";
    cin >> name;

    cout << "Enter Roll Number: ";
    cin >> roll;

    cout << "Enter Marks of 5 Subjects: ";
    cin >> m1 >> m2 >> m3 >> m4 >> m5;

    total = m1 + m2 + m3 + m4 + m5;
    percentage = total / 5.0;

    cout << "\n------ MARKSHEET ------" << endl;
    cout << "Name       : " << name << endl;
    cout << "Roll No.   : " << roll << endl;
    cout << "Subject 1  : " << m1 << endl;
    cout << "Subject 2  : " << m2 << endl;
    cout << "Subject 3  : " << m3 << endl;
    cout << "Subject 4  : " << m4 << endl;
    cout << "Subject 5  : " << m5 << endl;
    cout << "Total Marks: " << total << "/500" << endl;
    cout << "Percentage : " << percentage << "%" << endl;

    if (percentage >= 90)
        cout << "Grade: A+" << endl;
    else if (percentage >= 80)
        cout << "Grade: A" << endl;
    else if (percentage >= 70)
        cout << "Grade: B" << endl;
    else if (percentage >= 60)
        cout << "Grade: C" << endl;
    else if (percentage >= 40)
        cout << "Grade: D" << endl;
    else
        cout << "Grade: F" << endl;

    if (percentage >= 40)
        cout << "Result: Pass" << endl;
    else
        cout << "Result: Fail" << endl;

    return 0;
}