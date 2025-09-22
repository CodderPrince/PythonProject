#include <bits\stdc++.h>
using namespace std;

class Student
{
public:
    string name;
    int id;
    double cgpa;
};

int main()
{
    int n;
    cout << "Enter total student number: ";
    cin >> n;

    Student students[n];

    for (int i = 0; i < n; i++)
    {
        cout << "Enter details for Student number " << i + 1 << ":" << endl;
        cout << "Name: ";
        cin >> students[i].name;
        cout << "ID: ";
        cin >> students[i].id;
        cout << "CGPA: ";
        cin >> students[i].cgpa;
    }

    for (int i = 0; i < n; i++)
    {
        cout << "Student number: " << i + 1 << endl;
        cout << "Student name: " << students[i].name << endl;
        cout << "Student ID: " << students[i].id << endl;
        cout << "Student CGPA: " << students[i].cgpa << endl;
    }

    return 0;
}
