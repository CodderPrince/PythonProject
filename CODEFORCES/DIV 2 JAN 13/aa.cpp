#include <iostream>
#include <vector>

using namespace std;
// prince

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        int n;
        cin >> n;

        vector<pair<int, int>> constraints;
        for (int i = 0; i < n; ++i)
        {
            int a, x;
            cin >> a >> x;
            constraints.push_back({a, x});
        }

        int min_limit = -1, max_limit = 1e9 + 1;

        for (int i = 0; i < n; ++i)
        {
            if (constraints[i].first == 1)
            {
                min_limit = max(min_limit, constraints[i].second);
            }
            else if (constraints[i].first == 2)
            {
                max_limit = min(max_limit, constraints[i].second);
            }
        }

        int count = max(0, max_limit - min_limit + 1);

        for (int i = 0; i < n; ++i)
        {
            if (constraints[i].first == 3 && constraints[i].second >= min_limit && constraints[i].second <= max_limit)
            {
                count--;
            }
        }

        cout << max(0, count) << endl;
    }

    return 0;
}
