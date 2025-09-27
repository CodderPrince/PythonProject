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
        int n;
        long long x, y;
        cin >> n >> x >> y;

        vector<long long> a(n);
        long long total_sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
            total_sum += a[i];
        }

        sort(a.begin(), a.end());
        long long min_sum = total_sum - y;
        long long max_sum = total_sum - x;

        long long count = 0;
        for (int i = 0; i < n; i++)
        {
            int left = i + 1, right = n - 1;

            int low = lower_bound(a.begin() + i + 1, a.end(), min_sum - a[i]) - a.begin();

            int high = upper_bound(a.begin() + i + 1, a.end(), max_sum - a[i]) - a.begin() - 1;

            if (low <= high)
            {
                count += (high - low + 1);
            }
        }

        cout << count << "\n";
    }

    return 0;
}
