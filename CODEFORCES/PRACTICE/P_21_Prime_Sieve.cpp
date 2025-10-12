// PRIME SIEVE OPTIMAL WAY

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    ll n;
    cin >> n;
    ll cnt = 0;
    vector<ll> primes;

    if (n >= 2)
    {
        primes.push_back(2);
    }

    for (ll i = 3; i <= n; i += 2)
    {
        int flag = 1;
        for (ll j = 3; j * j <= i; j += 2)
        {
            if (i % j == 0)
            {
                flag = 0;
                break;
            }
        }

        if (flag == 1)
        {
            primes.push_back(i);
        }
    }

    cout << primes.size() << nl;
    for (ll &x : primes)
    {
        cout << x << " ";
    }
    cout << nl;

    return 0;
}
