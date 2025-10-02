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
        int n, k;
        cin >> n >> k;

        vector<pair<int, int>> customers(n);
        vector<int> all_prices;

        for (int i = 0; i < n; i++)
        {
            cin >> customers[i].first;
        }
        for (int i = 0; i < n; i++)
        {
            cin >> customers[i].second;
            all_prices.push_back(customers[i].first);
            all_prices.push_back(customers[i].second);
        }

        sort(all_prices.begin(), all_prices.end());
        all_prices.erase(unique(all_prices.begin(), all_prices.end()), all_prices.end());

        sort(customers.begin(), customers.end(), [](const pair<int, int> &a, const pair<int, int> &b)
             { return a.second < b.second; });

        int max_earnings = 0;
        vector<int> prefix_satisfied(n, 0); // prince

        for (int price : all_prices)
        {
            int satisfied_customers = 0, negative_reviews = 0, earnings = 0;

            for (int i = 0; i < n; ++i)
            {
                int a = customers[i].first, b = customers[i].second;

                if (price <= b)
                {
                    satisfied_customers++;
                    earnings += price;
                    if (price > a)
                    {
                        negative_reviews++;
                    }
                }
            }

            if (negative_reviews <= k)
            {
                max_earnings = max(max_earnings, earnings);
            }
        }

        cout << max_earnings << '\n';
    }

    return 0;
}
