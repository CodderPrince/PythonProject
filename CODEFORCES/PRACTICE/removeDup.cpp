#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    vector<int> ans;
    unordered_map<int, int> m;
    for (int i = n - 1; i >= 0; i--)
    {
        if (m[a[i]] == 0)
        {
            m[a[i]]++;
            ans.push_back(a[i]);
        }
        else
        {
            continue;
        }
    }
    reverse(ans.begin(), ans.end());
    cout << ans.size() << "\n";
    for (auto el : ans)
    {
        cout << el << " ";
    }
    cout << "\n";
    
    return 0;
}