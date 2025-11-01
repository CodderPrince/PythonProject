/**************************************************
 *..........Bismillahir Rahmanir Raheem...........*
 *------------------------------------------------*
 * Name:  MD. AN NAHIAN PRINCE                    *
 * Codeforces: Hacker_3.0                         *
 * University: BEGUM ROKEYA UNIVERSITY, RANGPUR   *
 * Department: COMPUTER SCIENCE AND ENGINEERING   *
 * Email: annahian44@gmail.com                    *
 *------------------------------------------------*
 **************************************************/

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
ll sum(ll mat1[], ll mat2[], ll a, ll b)
{
    ll i,j,sum[a][b];
    for(i=0; i<a; i++)
    {
        for(j=0; j<b; j++)
        {
            sum[i][j] = sum[i][j] + mat1[i][j]+mat2[i][j];
        }
    }
}
/****MAIN FUNCTION IS HERE****/

int main()
{
    ll a, b;
    cin >> a >> b;
    ll mat1[a][b];
    ll i, j;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            mat1[i][j];
        }
    }
    ll mat2[a][b];
    // ll i,j;
    for (i = 0; i < a; i++)
    {
        for (j = 0; j < b; j++)
        {
            mat2[i][j];
        }
    }
    
    ll s = sum(mat1,mat2,a,b);

    return 0;
}