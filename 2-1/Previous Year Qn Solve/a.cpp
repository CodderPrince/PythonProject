#include <iostream>
using namespace std;

void printPattern(int m, int n)
{
    if (m > n)
    {
        return;
    }

    for (int i = 0; i < m; i++)
    {
        cout << "*";
    }
    cout << endl;

    printPattern(m + 1, n);

    /*Backtrack
    Recursion Know where he came
    So, backtrack is more important and print also*/

    for (int i = 0; i < m; i++)
    {
        cout << "*";
    }
    cout << endl;
}

int main()
{
    int m, n;
    cout << "Enter values for m and n: ";
    cin >> m >> n;

    printPattern(m, n);

    return 0;
}