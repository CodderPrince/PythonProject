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

#include <bits\stdc++.h>
using namespace std;

bool is_jagged(ll a[], ll n)
{
    for (ll i = 1; i < n - 1; i++)
    {
        if (a[i - 1] < a[i] && a[i] > a[i + 1])
        {
            return true;
        }
    }
    return false;
}

void swap(ll a[], ll i, ll j)
{
    ll temp = a[i];
    a[i] = a[j];
    a[j] = temp;
}

bool sort_permutation(ll a[], ll n)
{

    if (is_sorted(a, a + n))
    {
        return true;
    }
    if (!is_jagged(a, n))
    {
        return false;
    }

    while (is_jagged(a, n))
    {
        for (ll i = 1; i < n - 1; i++)
        {
            if (a[i - 1] < a[i] && a[i] > a[i + 1])
            {
                swap(a, i, i + 1);
                break;
            }
        }
    }

    if (is_sorted(a, a + n))
    {
        return true;
    }

    return false;
}

int main()
{
    ll t;
    cin >> t;
    while (t--)
    {
        ll n;
        cin >> n;
        ll a[n];
        for (ll i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if (sort_permutation(a, n))
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}
