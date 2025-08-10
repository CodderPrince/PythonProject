#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

long long solveTestCase(int n, int k, vector<pair<int, int>>& bottles) {
    unordered_map<int, vector<int>> brandCostMap;
    for (const auto& bottle : bottles) {
        brandCostMap[bottle.first].push_back(bottle.second);
    }

    vector<long long> brandEarnings;

    for (auto& it : brandCostMap) {
        auto& costs = it.second;
        sort(costs.rbegin(), costs.rend());
        long long sum = 0;
        for (int i = 0; i < costs.size(); ++i) {
            sum += costs[i];
            if ((i + 1) % (i + 1) == 0) { // Check if this group forms a full shelf
                brandEarnings.push_back(sum);
            }
        }
    }

    sort(brandEarnings.rbegin(), brandEarnings.rend()); // Sort earnings in descending order

    long long maxEarnings = 0;
    for (int i = 0; i < min(n, (int)brandEarnings.size()); ++i) {
        maxEarnings += brandEarnings[i];
    }

    return maxEarnings;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<pair<int, int>> bottles(k);
        for (int i = 0; i < k; ++i) {
            cin >> bottles[i].first >> bottles[i].second;
        }
        cout << solveTestCase(n, k, bottles) << endl;
    }
    return 0;
}
