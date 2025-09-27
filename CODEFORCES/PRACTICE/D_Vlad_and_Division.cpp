#include <iostream>
#include <vector>

using namespace std;

int main() {
  int t;
  cin >> t;
  while (t--) {
    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) { cin >> a[i]; }
    int ans = 0;
    for (int i = 0; i < 31; i++) {
      int cnt0 = 0, cnt1 = 0;
      for (int j = 0; j < n; j++) {
        if ((a[j] >> i) & 1) cnt1++;
        else cnt0++;
      }
      if (cnt0 > 0 && cnt1 > 0) ans++;
    }
    cout << ans + (n > 0) << endl;
  }
  return 0;
}