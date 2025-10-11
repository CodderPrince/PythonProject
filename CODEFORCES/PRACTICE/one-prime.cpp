// prince

#include <bits\stdc++.h>
using namespace std;

int main()
{
    long long int n;
    cin >> n;
    long long int i, j;
    for (i = 1; i < n; i++)
    {
        if (n <= 1)
        {
            cout << "NO\n";
            break;
        }
        for (j = 2; j * j <= n; j++)
        {
            if (n % j == 0)
            {
                cout << "NO\n";
                return 0;
                ;
            }
        }
        if (j * j > n)
        {
            cout << "YES\n";
            break;
        }
    }

    return 0;
}
