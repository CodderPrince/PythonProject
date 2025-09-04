#include <bits\stdc++.h>
#include <vector>

using namespace std;

bool canSort(vector<int> arr) {
  // Check if the array is already sorted.
  for (int i = 1; i < arr.size(); i++) {
    if (arr[i] < arr[i - 1]) {
      return false;
    }
  }

  // Try to sort the array using the given operations.
  for (int m = 0; m <= arr.size() / 2; m++) {
    // Subtract 1 from the first 2^m elements.
    for (int i = 0; i < (1 << m); i++) {
      arr[i]--;
    }

    // Check if the array is sorted after the operation.
    if (canSort(arr)) {
      return true;
    }

    // Revert the operation.
    for (int i = 0; i < (1 << m); i++) {
      arr[i]++;
    }
  }

  // If we reach here, it means that the array cannot be sorted using the given operations.
  return false;
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

    bool canSort = canSort(arr);
    if (canSort) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
  }

  return 0;
}
