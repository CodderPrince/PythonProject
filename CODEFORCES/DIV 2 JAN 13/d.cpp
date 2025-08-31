#include <iostream>
#include <vector>

using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, q;
        cin >> n >> q;

        vector<pair<int, int>> operations;
        for (int i = 0; i < n; ++i) {
            int b, x;
            cin >> b >> x;
            operations.push_back({b, x});
        }

        vector<long long> queries(q);
        for (int i = 0; i < q; ++i) {
            cin >> queries[i];
        }

        vector<long long> prefixSum;
        long long totalElements = 0;

        for (int i = 0; i < n; ++i) {
            int b = operations[i].first;
            int x = operations[i].second;

            if (b == 1) {
                totalElements += x;
                prefixSum.push_back(totalElements);
            } else {
                totalElements *= x;
                prefixSum.push_back(totalElements);
            }
        }

        for (int i = 0; i < q; ++i) {
            long long query = queries[i];

            int index = lower_bound(prefixSum.begin(), prefixSum.end(), query) - prefixSum.begin();
            
            if (index == 0) {
                cout << query << " ";
            } else {
                long long remaining = query - prefixSum[index - 1];
                long long elementCount = remaining % (totalElements / prefixSum[index - 1]);
                
                if (elementCount == 0) {
                    cout << n << " ";
                } else {
                    cout << elementCount << " ";
                }
            }
        }

        cout << endl;
    }

    return 0;
}
