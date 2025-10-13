// prince

#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int row, col;
    for (row = 0; row < n; row++)
    {
        for (col = row; col < n; col++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}