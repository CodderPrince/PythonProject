#include <iostream>
#include <vector>
#include <unordered_set>
using namespace std;

bool isGoodArray(vector<int>& arr) {
    int n = arr.size();
    unordered_set<int> uniqueSums;

    // Calculate the differences between adjacent elements
    for (int i = 1; i < n; i++) {
        int diff = arr[i] - arr[i - 1];
        uniqueSums.insert(diff);
    }

    return uniqueSums.size() == 1;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        if (isGoodArray(arr)) {
            cout << "Yes\n";
        } else {
            cout << "No\n";
        }
    }

    return 0;
}