#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int fact(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * n - 1;
    }
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        cout << "factorial: " << fact(n);
    }

    return 0;
}