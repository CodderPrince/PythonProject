#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        vector<int> dp(n + 1, 0);
        for (int i = 1; i <= n; i++)
        {
            dp[i] = dp[i - 1];
            for (int j = i - 2; j >= 0; j--)
            {
                if (a[j] > a[i - 1])
                {
                    dp[i] = max(dp[i], dp[j] + 1);
                }
            }
        }
        cout << n - dp[n] << endl;
    }
    return 0;
}
