#include <bits/stdc++.h>
using namespace std;

#define ll long long

#define PI 3.14159265358979323846 // acos(-1)
#define nl "\n"
const ll mod = 1e9 + 7; // 1000000007
void multiply(ll F[2][2], ll M[2][2])
{
    ll first = (F[0][0] * M[0][0] + F[0][1] * M[1][0]) % mod;
    ll second = (F[0][0] * M[0][1] + F[0][1] * M[1][1]) % mod;
    ll third = (F[1][0] * M[0][0] + F[1][1] * M[1][0]) % mod;
    ll fourth = (F[1][0] * M[0][1] + F[1][1] * M[1][1]) % mod;

    F[0][0] = first;
    F[0][1] = second;
    F[1][0] = third;
    F[1][1] = fourth;
}
void power(ll F[2][2], ll n)
{
    // base case
    if (n <= 1)
    {
        return;
    }

    power(F, n / 2);
    multiply(F, F);

    ll M[2][2] =
        {
            {1, 1},
            {1, 0}};

    if (n % 2 != 0)
    {
        multiply(F, M);
    }
}

ll fib(ll n)
{
    // base case
    if (n == 0)
    {
        return 0;
    }
    ll F[2][2] =
        {{1, 1},
         {1, 0}};
    power(F, n - 1);

    return F[0][0];
}
int main()
{
    ll n;
    cin >> n;
    cout << fib(n) << nl;

    return 0;
}