#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define PI 3.14159265358979323846 // acos(-1)
#define nl "\n"

const ll mod = 1e9 + 7;
ll f[2][2] = {{1, 1}, {1, 0}};
ll m[2][2] = {{1, 1}, {1, 0}};

void multiply(ll f[2][2], ll m[2][2])
{
    ll a, b, c, d;
    a = (f[0][0] * m[0][0] + f[0][1] * m[1][0]) % mod;
    b = (f[0][0] * m[0][1] + f[0][1] * m[1][1]) % mod;
    c = (f[1][0] * m[0][0] + f[1][1] * m[1][0]) % mod;
    d = (f[1][0] * m[0][1] + f[1][1] * m[1][1]) % mod;

    f[0][0] = a;
    f[0][1] = b;
    f[1][0] = c;
    f[1][1] = d;
}

void power(ll f[2][2], ll n)
{
    // base case
    if (n <= 1)
    {
        return;
    }
    power(f, n / 2);
    multiply(f, f);

    if (n % 2 != 0)
    {
        multiply(f, m);
    }
}
ll fib(ll n)
{
    // base case
    if (n == 0)
    {
        return 0;
    }

    // else send to power
    power(f, n - 1);

    return f[0][0];
}

int main()
{
    ll n;
    cin >> n;
    cout << fib(n) << nl;

    return 0;
}