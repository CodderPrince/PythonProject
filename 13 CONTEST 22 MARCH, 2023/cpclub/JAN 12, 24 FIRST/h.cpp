#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int maximumSubarraySum(vector<int>& arr) {
    int n = arr.size();
    int currentSum = 0, maxSum = 0;

    for (int i = 0; i < n; i++) {
        currentSum = max(arr[i], currentSum + arr[i]);
        maxSum = max(maxSum, currentSum);
    }

    return maxSum;
}

int main() {
    int n, m;
    cin >> n >> m;

    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int currentSum = maximumSubarraySum(arr);
    cout << currentSum << endl;

    while (m--) {
        int k, x;
        cin >> k >> x;

        arr[k - 1] = x;
        currentSum = maximumSubarraySum(arr);
        cout << currentSum << endl;
    }

    return 0;
}