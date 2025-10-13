// prince

#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i, j;
    for (i = 1; i <= n; i++)
    {
        if (n <= 1)
        {
            continue;
        }
        for (j = 2; j * j <= i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (j * j > i && i != 1)
        {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}
