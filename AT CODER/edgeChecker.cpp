#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    ll a, b;
    cin >> a >> b;
    if (a + 1 == b)
    {
        cout << "Yes\n";
    }
    else if (a == 1 && b == 10)
    {
        cout << "Yes\n";
    }
    else
    {
        cout << "No\n";
    }

    return 0;
}