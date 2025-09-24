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
    Student info[n];
    int i;
    for (i = 0; i < n; i++)
    {
        cout << "Enter student details: " << i + 1 << endl;
        cout << "Enter name: ";
        cin >> info[i].name;
        cout << "Enter id: ";
        cin >> info[i].id;
        cout << "Enter cgpa: ";
        cin >> info[i].cgpa;
    }
    for (i = 0; i < n; i++)
    {
        cout << "\n";
        cout << "Number of students: " << i + 1 << endl;
        cout << "Student name: " << info[i].name << endl;
        cout << "Student id: " << info[i].id << endl;
        cout << "Student cgpa: " << info[i].cgpa << endl;
    }

    return 0;
}