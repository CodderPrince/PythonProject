/*Problem no: 5
Climbing Stairs*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007            // 1e9 + 7
#define PI 3.14159265358979323846 // acos(-1)
#define nl "\n"

int solve(int n)
{
    if (n == 1)
    {
        return 1;
    }
    if (n == 2)
    {
        return 2;
    }

    else
    {
        return solve(n - 1) + solve(n - 2);
    }
}

int main()
{
    int n;
    cout << "Enter the number of stairs(n): ";
    cin >> n;
    int result = solve(n);

    cout << "Total number of distinct ways are: " << result << nl;

    return 0;
}