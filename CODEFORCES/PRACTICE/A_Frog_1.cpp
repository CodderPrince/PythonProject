#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define mod 1000000007            // 1e9 + 7
#define PI 3.14159265358979323846 // acos(-1)
#define nl "\n"

int main()
{
    int t;
    cin >> t;

    vector<int> arr(t);
    for (int i = 0; i < t; i++)
    {
        cin >> arr[i];
    }

    vector<int> dp(t, 0);

    // dp[0] = 0;                    // 0
    dp[1] = abs(arr[1] - arr[0]); // 20

    for (int i = 2; i < t; i++)
    {
        dp[i] = min((dp[i - 1] + abs(arr[i] - arr[i - 1])), (dp[i - 2] + abs(arr[i] - arr[i - 2])));
    }

    cout << dp[t - 1] << nl;

    return 0;
}