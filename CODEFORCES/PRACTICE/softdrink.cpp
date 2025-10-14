#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

int main()
{
    ll n, k, l, c, d, p, nll, np;
    cin >> n >> k >> l >> c >> d >> p >> nll >> np;
    ll x, y, z;
    x = (k * l) / nll;
    y = (p / np);
    z = c * d;
    ll minn = 0;
    minn = min({x, y, z}) / n;
    cout << minn << nl;

    return 0;
}

//
/*
friends n = 3
bottles k = 4
mili    l = 5
limes   c = 10
slices  d = 8
salt    p = 100
need ml nll = 3
need salt np = 1

calculations:
total bottle = k * l = 20
per friend need 3 ml
so x = 20 / 3 = 6
total salt / per friend need
y = 100/1 = 100
total lime slices = c*d= 10 * 8 = 80

now find the minimum toasts so
divide x/n,y/n,z/n and find the
minimum number
cause if anything is shortage then
not possible to make toasts


*/