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
bool is_square(const vector<string> &grid, int size)
{
    int count_ones = 0;
    int top = -1, bottom = -1, left = -1, right = -1;

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (grid[i][j] == '1')
            {
                count_ones++;
                if (top == -1 || i < top)
                    top = i;
                if (bottom == -1 || i > bottom)
                    bottom = i;
                if (left == -1 || j < left)
                    left = j;
                if (right == -1 || j > right)
                    right = j;
            }
        }
    }

    return count_ones == (bottom - top + 1) * (right - left + 1);
}

bool is_triangle(const vector<string> &grid, int size)
{
    int count_ones = 0;
    int row = -1, col = -1;

    for (int i = 0; i < size; ++i)
    {
        for (int j = 0; j < size; ++j)
        {
            if (grid[i][j] == '1')
            {
                count_ones++;
                if (row == -1 || i > row)
                {
                    row = i;
                    col = j;
                }
            }
        }
    }

    if (count_ones != (2 * row - 1))
        return false;

    for (int i = 0; i < row; ++i)
    {
        if (grid[row][col - i] != '1' || grid[row][col + i] != '1')
            return false;
    }

    return true;
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;
        vector<string> grid(n);
        for (int i = 0; i < n; ++i)
        {
            cin >> grid[i];
        }

        if (is_square(grid, n))
            cout << "SQUARE" << endl;
        else
            cout << "TRIANGLE" << endl;
    }

    return 0;
}
