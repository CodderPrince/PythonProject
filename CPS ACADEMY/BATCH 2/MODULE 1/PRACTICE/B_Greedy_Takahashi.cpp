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
#define nl "\n"

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

// optimized
int main()
{
    ll a, b, k;
    cin >> a >> b >> k;

    // remain of takhashaki
    ll takhashaki = max(0LL, a - k);
    ll aoiki = max(0LL, b - max(0LL, k - a));
    cout << takhashaki << " " << aoiki << nl;
}
/****CREATE NEW FUNCTION HERE****/

/****MAIN FUNCTION IS HERE****/
// brute force which is not optimized
/*
int main()
{
    ll a, b, k;
    cin >> a >> b >> k;
    while (k > 0)
    {
        if (a > 0)
        {
            a--;
        }
        else if (b > 0)
        {
            b--;
        }
        k--;
    }
    cout << a << " " << b << nl;

    return 0;
}
*/
/*
#include <iostream>

using namespace std;

int main() {
    long long A, B, K;
    cin >> A >> B >> K;

    // Calculate remaining cookies for Takahashi
    long long remaining_takahashi = max(0LL, A - K);

    // Calculate remaining cookies for Aoki
    long long remaining_aoki = max(0LL, B - max(0LL, K - A));

    cout << remaining_takahashi << " " << remaining_aoki << endl;
    return 0;
}

*/