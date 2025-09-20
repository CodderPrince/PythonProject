#include <bits/stdc++.h>
using namespace std;

const int N = 4e3 + 5;
int dp[N];
int main()
{
    int n, a, b, c;
    cin >> n >> a >> b >> c;

    for (int i = 1; i < n; i++)
    {
        dp[i] = -1e9;
    }
    for (int i = 1; i < N; i++)
    {
        if (i - a >= 0)
            dp[i] = max(dp[i], dp[i - a]);
        if (i - b >= 0)
            dp[i] = max(dp[i], dp[i - b]);
        if (i - c >= 0)
            dp[i] = max(dp[i], dp[i - c]);
        if (dp[i] >= 0)
            dp[i]++;
    }
    cout << dp[n];
}