#include <iostream>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    long long n, k;
    cin >> n >> k;
    long long cur = 1;
    long long cnt = 0;
    while (cnt + cur <= k) {
      cnt += cur;
      cur *= 2;
    }
    long long ans = (k - cnt) * 2 + 1;
    cout << ans << endl;
  }
  return 0;
}