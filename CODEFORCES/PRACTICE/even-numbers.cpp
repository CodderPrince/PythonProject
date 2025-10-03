// prince

#include <bits\stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int i;
    for (i = 2; i <= n; i = i + 2)
    {
        if (i % 2 == 0)
            cout << i << endl;
    }
    if (n < 2)
        cout << "-1" << endl;

    return 0;
}