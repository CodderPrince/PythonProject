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
    ll n, k;
    cin >> n >> k;
    deque<ll> arr(n);

    for (int i = 0; i < n; i++)
    {
        ll x;
        cin >> x;
        arr.push_back(x);
    }

    /*for (auto &x : arr)
    {
        cout << x << " ";
    }
    cout << nl;*/
    ll cnt = 0;

    while (arr.size())
    {
        //cout << "back: "<<arr.back() << nl;
        if (arr.back() <= k)
        {
            arr.pop_back();
            cnt++;
        }

        else if (arr.front() <= k)
        {
            arr.pop_front();
            cnt++;
        }

        else
        {
            break;
        }
        //cout << "front: "<<arr.front() << nl;

        /*cout << "CNT: " << cnt << nl;
        for (auto &x : arr)
        {
            cout << x << " ";
        }

        cout << nl;*/
    }

    cout << cnt - n << nl;

    return 0;
}
/*
using namespace std;
#define ll long long
#include <bits/stdc++.h>
#define endl "\n"

int main()
{
    cin.tie(0);
    cin.sync_with_stdio(0);
    int n, k;
    cin >> n >> k;
    deque<int> v(n);
    int x = 0;
    for (int i = 0; i < n; ++i)
    {
        int z;
        cin >> z;
        v.push_back(z);
    }
    while (v.size())
    {
        if (v.back() <= k)
        {
            v.pop_back();
            x++;
        }
        else if (v.front() <= k)
        {
            v.pop_front();
            x++;
        }
        else
            break;
    }
    cout << x - n;
}
*/