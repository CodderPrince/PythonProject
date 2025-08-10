/*Problem no: 5
Climbing Stairs*/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007            // 1e9 + 7
#define PI 3.14159265358979323846 // acos(-1)
#define nl "\n"

// initialize n globally
int n;

// create an dp array
vector<int> dp(n + 2, 0);

int solve(int n)
{
    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 2;

    if (n <= 2)
    {
        return dp[n];
    }
    else
    {
        for (int i = 3; i <= n; i++)
        {
            dp[i] = dp[i - 1] + dp[i - 2];
        }
        return dp[n];
    }
}

int main()
{

    cout << "Enter the number of stairs(n): ";
    cin >> n;
    int result = solve(n);

    cout << "Total number of distinct ways are: " << result << nl;

    return 0;
}