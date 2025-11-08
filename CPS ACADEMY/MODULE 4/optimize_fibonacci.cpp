/*
Optimize Fibonacci Series
Which code can manage n = 1e18
T.C = O(logn)
Method: Matrix Exponentiation
*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long

const ll MOD = 1e9 + 7; // 1000000007

void multiply(ll F[2][2], ll M[2][2])
{
    ll x = (F[0][0] * M[0][0] + F[0][1] * M[1][0]) % MOD;
    ll y = (F[0][0] * M[0][1] + F[0][1] * M[1][1]) % MOD;
    ll z = (F[1][0] * M[0][0] + F[1][1] * M[1][0]) % MOD;
    ll w = (F[1][0] * M[0][1] + F[1][1] * M[1][1]) % MOD;

    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}

void power(ll F[2][2], ll n)
{
    if (n <= 1)
    {
        return;
    }

    ll M[2][2] = {{1, 1}, {1, 0}};

    power(F, n / 2);
    multiply(F, F);

    if (n % 2 != 0)
    {
        multiply(F, M);
    }
}

ll fibonacci(ll n)
{
    ll F[2][2] = {{1, 1}, {1, 0}};
    if (n == 0)
    {
        return 0;
    }

    power(F, n - 1);

    return F[0][0];
}

int main()
{
    ll n;
    cin >> n;
    cout << fibonacci(n) << endl;
    return 0;
}
