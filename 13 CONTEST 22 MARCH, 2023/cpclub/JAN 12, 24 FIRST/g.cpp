#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl

/*testcase
minene
prince
3
miloy
jahen
0
prince
shefat
1
*/
int Name(const string &S, const string &T)
{
    int n = S.size();
    int m = T.size();

    vector<vector<int>> dp(n + 1, vector<int>(m + 1, 0));
    // solve by 2D dp array

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            if (S[i - 1] == T[j - 1])

            /*
            check every index if similar then count++
            dp[1][0]=1 for floren and latina
            */
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
            }
        }
    }

    return dp[n][m];
}

int main()
{
    string S, T;
    cin >> S >> T;
    // string S = "floren";
    // string T = "latina";

    int maxLength = Name(S, T);
    cout << maxLength << endl;

    return 0;
}