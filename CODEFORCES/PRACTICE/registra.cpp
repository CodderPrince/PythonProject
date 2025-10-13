#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define F first
#define S second
#define all(v) v.begin(), v.end()

int main()
{
    ll n;
    cin >> n;
    set<string> st;
    unordered_map<string, ll> mp;
    for (int i = 0; i < n; i++)
    {
        string s;
        cin >> s;
        if (st.find(s) == st.end())
        {
            st.insert(s);
            cout << "OK\n";
        }
        else
        {
            cout << s << mp[s] + 1 << '\n';
            mp[s]++;
        }
    }

    return 0;
}