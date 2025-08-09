#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    int n, d;
    cin >> n >> d;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    sort(a, a + n, greater<int>());

    int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (d >= a[i])
        {
            count += (d / a[i]);
            d = d % a[i];
        }
        else if (d > 0)
        {
            count += 1;
            d = 0;
        }

        if (d == 0)
        {
            break;
        }
    }

    cout << count << endl;

    return 0;
}
