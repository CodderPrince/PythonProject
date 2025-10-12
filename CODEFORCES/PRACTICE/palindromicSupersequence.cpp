/*
#include <iostream>
#include <vector>
using namespace std;

int SCSLength(string X, string Y)
{
    int m = X.length();
    int n = Y.length();

    // Create a 2D vector array of size (m+1) x (n+1)
    vector<vector<int>> dp(m + 1, vector<int>(n + 1, 0));

    // Fill in the base cases
    for (int i = 0; i <= m; i++)
    {
        dp[i][0] = i;
    }
    for (int j = 0; j <= n; j++)
    {
        dp[0][j] = j;
    }

    // Fill in the rest of the elements
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (X[i - 1] == Y[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = min(dp[i][j - 1] + 1, dp[i - 1][j] + 1);
            }
        }
    }

    return dp[m][n];
}

*/

/********************************************************
 *..........Bismillahir Rahmanir Raheem.................
 *------------------------------------------------------
 * Name:  MD. AN NAHIAN PRINCE
 * University: BEGUM ROKEYA UNIVERSITY, RANGPUR
 * Department: COMPUTER SCIENCE AND ENGINEERING
 * Email: annahian44@gmail.com
 *------------------------------------------------------
 ********************************************************/

#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define nl endl
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define pb push_back
#define mp make_pair
#define F first
#define S second

#define FOR(i, a, b) for (int i = (a); i < (b); i++)
#define ROF(i, a, b) for (int i = (a); i > (b); i--)
#define F0R(i, n) FOR(i, 0, n)
#define ROF0R(i, n) ROF(i, n, 0)
#define EACH(x, a) for (auto &x : a)

#define fastio                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
#define ld long double

#define mod 1000000007            // 1e9 + 7
#define PI 3.14159265358979323846 // acos(-1)
#define endl "\n"

typedef vector<int> vi;
typedef pair<int, int> pii;

// Additional Macros and Constants
#define sz(v) (int)v.size()
#define INF 1000000000

// Additional Data Structures
typedef vector<pii> vpii;
typedef vector<ll> vll;
typedef set<int> si;
typedef unordered_set<int> usi;
typedef map<int, int> mi;
typedef unordered_map<int, int> umi;

/****CREATE NEW FUNCTION HERE****/

/****MAIN FUNCTION IS HERE****/

int main()
{
    // ll t;
    // cin >> t;
    // while (t--)
    //{
    string str;
    cin >> str;
    cout << str;
    reverse(str.begin(), str.end());
    cout << str << nl;
    //}

    return 0;
}
/*
 // Fill in the rest of the elements
    for (int i = 1; i <= m; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (X[i - 1] == Y[j - 1])
            {
                dp[i][j] = dp[i - 1][j - 1] + 1;
            }
            else
            {
                dp[i][j] = min(dp[i][j - 1] + 1, dp[i - 1][j] + 1);
            }
        }
    }
*/