// prince

#include <bits\stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int n, l, a, b, max, temp, i, sum = 0, min;
        cin >> a >> b;
        max = a;
        min = b;
        if (max < min)
        {
            max = b;
            min = a;
        }
        for (i = min + 1; i < max; i++)
        {
            if (i % 2 != 0)
                sum = sum + i;
        }
        cout << sum << endl;
    }

    return 0;
}