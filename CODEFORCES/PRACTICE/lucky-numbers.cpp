// prince

#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int f, l;
    l = n % 10;
    f = n / 10;
    if (l % f == 0)
    {
        cout << "YES\n";
    }
    else if (f % l == 0)
    {
        cout << "YES\n";
    }
    else
    {
        cout << "NO\n";
    }

    return 0;
}