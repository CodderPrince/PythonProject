#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    int n;
    cin >> n;

    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int max_value = a[0];
    int max_index = 0;
    for (int i = 1; i < n; i++)
    {
        if (a[i] > max_value)
        {
            max_value = a[i];
            max_index = i;
        }
    }

    cout << max_index + 1 << endl;

    return 0;
}
