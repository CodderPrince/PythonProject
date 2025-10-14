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

const int mx = 2e5 + 123;
ll arr[mx], sum[mx];
/****CREATE NEW FUNCTION HERE****/

/****MAIN FUNCTION IS HERE****/

int main()
{
    int n, q;
    cin >> n >> q;
    int i;
    for (i = 1; i <= n; i++)
    {
        cin >> arr[i];
    }
    for (i = 1; i <= n; i++)
    {
        sum[i] = arr[i] + sum[i - 1];
    }
    /*
    sum[1]=3
    sum[2]=5
    sum[3]=9
    sum[4]=14
    sum[5]=15
    */

    while (q--)
    {
        int l, r;
        cin >> l >> r;
        ll ans = sum[r] - sum[l - 1];
        cout << ans << nl;
    }
    return 0;
}