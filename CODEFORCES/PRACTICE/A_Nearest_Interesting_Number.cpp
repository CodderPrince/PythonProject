#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    ll n, x = 0, temp;
    cin >> n;
    while (1)
    {
        ll sum = 0;
        x = n;
        while (x > 0)
        {
            ll last = x % 10;
            sum += last;
            x /= 10;
        }
        if (sum % 4 == 0)
        {
            cout << n << nl;
            break;
        }
        n++;
    }
    // temp=n;
    // n = x;
    // x=temp;
    // copy(x,n);
    // x = n;
    // cout<<"X: "<<x<<nl;

    // cout<<sum<<nl;
    // cout<<"N: "<<n<<nl;

    return 0;
}