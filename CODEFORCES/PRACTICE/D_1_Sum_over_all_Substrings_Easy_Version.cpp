#include <iostream>
using namespace std;

// A function that returns the minimum number of 1s in a p-good string
int f(string p) {
  int n = p.length();
  int min_ones = n;
  for (int i = 0; i < n; i++) {
    // Find the indices l and r such that 1 <= l <= i <= r <= n
    int l = i, r = i;
    while (l > 0 && p[l-1] == p[i]) l--;
    while (r < n-1 && p[r+1] == p[i]) r++;
    // Count the number of 1s in the substring ql...qr
    int ones = 0;
    for (int j = l; j <= r; j++) {
      if (p[j] == '1') ones++;
    }
    // Update the minimum number of 1s
    min_ones = min(min_ones, ones);
  }
  return min_ones;
}

// A function that returns the sum of values of f over all substrings of s
int sumOfSubstrings(string s) {
  int n = s.length();
  int sum = 0;
  // Iterate over all substrings of s
  for (int i = 0; i < n; i++) {
    for (int j = i; j < n; j++) {
      // Get the substring s[i...j]
      string sub = s.substr(i, j-i+1);
      // Add the value of f(sub) to the sum
      sum += f(sub);
    }
  }
  return sum;
}

int main() {
  // Read the number of test cases
  int t;
  cin >> t;
  while (t--) {
    // Read the length of the binary string
    int n;
    cin >> n;
    // Read the binary string
    string s;
    cin >> s;
    // Output the sum of values of f over all substrings of s
    cout << sumOfSubstrings(s) << endl;
  }
  return 0;
}
