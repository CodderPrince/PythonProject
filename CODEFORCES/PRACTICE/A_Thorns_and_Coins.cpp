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
        string s;
        cin >> s;
        vector<int> dp(n + 2, 0);
        for (int i = n - 1; i >= 0; i--)
        {
            if (s[i] == '*')
            {
                dp[i] = 0;
            }
            else
            {
                dp[i] = max(dp[i], dp[i + 1] + (s[i] == '@'));
                if (i + 2 < n)
                    dp[i] = max(dp[i], dp[i + 2] + (s[i] == '@'));
            }
        }
        cout << dp[0] << "\n";
    }
    return 0;
}
