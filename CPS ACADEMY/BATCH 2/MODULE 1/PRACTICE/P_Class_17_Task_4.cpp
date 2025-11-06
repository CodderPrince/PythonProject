#include <iostream>
#include <vector>
#include <algorithm> // for std::sort
#include <utility>   // for std::pair
using namespace std;

int main() {
    // Input pairs of integers until both are zero
    vector<pair<long long, long long>> pairs;
    while (true) {
        long long first, second;
        cin >> first >> second;
        if (first == 0 && second == 0) {
            break;
        }
        pairs.push_back({first, second});
    }

    // Sort the pairs in ascending order
    sort(pairs.begin(), pairs.end());

    // Print the sorted pairs
    for (const auto& pair : pairs) {
        cout << pair.first << " " << pair.second << "\n";
    }

    return 0;
}
