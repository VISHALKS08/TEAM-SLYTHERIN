#include <iostream>
using namespace std;

class Attendance
{

public:
    string subject;
    int totalStudents;
    int presentStudents;
    void getData()
    {
        cout << "Enter Subject: ";
        cin >> subject;

        cout << "Enter Total Students: ";
        cin >> totalStudents;

        cout << "Enter Present Students: ";
        cin >> presentStudents;
    }

    void markAttendance()
    {
        cout << "Attendance Marked Successfully!" << endl;
    }

    float calculateAttendancePercentage()
    {
        return (presentStudents * 100.0) / totalStudents;
    }

    void checkAttendance()
    {

        float percentage = calculateAttendancePercentage();
        cout << "Attendance Percentage: " << percentage << "%" << endl;

        if (percentage >= 75)
            cout << "Attendance is Above 75%" << endl;
        else
            cout << "Attendance is Below 75%" << endl;
    }
};

int main()
{
    Attendance a;

    a.getData();
    a.markAttendance();
    a.checkAttendance();

    return 0;
}
