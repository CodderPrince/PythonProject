// prince

#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        int n, m, k;
        cin >> n >> m >> k;
        vector<int> a(m);
        unordered_set<int> knownAnswers;
        int countInSet = 0;

        for (int i = 0; i < m; i++)
            cin >> a[i];
        for (int i = 0; i < k; i++)
        {
            int temp;
            cin >> temp;
            if (temp <= n && knownAnswers.insert(temp).second)
                countInSet++;
        }

        string result;
        result.reserve(m);
        for (int i = 0; i < m; i++)
        {

            int effectiveCount = knownAnswers.count(a[i]) > 0 ? countInSet - 1 : countInSet;
            result.push_back(effectiveCount == (n - 1) ? '1' : '0');
        }
        cout << result << '\n';
    }
    return 0;
}
