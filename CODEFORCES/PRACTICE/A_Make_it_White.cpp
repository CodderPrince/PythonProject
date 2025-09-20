#include <iostream>
#include <string>
using namespace std;

int main() {
  int t; // number of test cases
  cin >> t;
  while (t--) {
    int n; // length of the strip
    string s; // string of 'W' and 'B'
    cin >> n >> s;
    int ans = 0; // minimum length to be painted white
    int cur = 0; // current segment length of black cells
    int max = 0; // maximum segment length of black cells
    for (int i = 0; i < n; i++) {
      if (s[i] == 'W') {
        // white cell, reset current segment length
        cur = 0;
      } else {
        // black cell, increment current segment length
        cur++;
        // update maximum segment length if needed
        if (cur > max) {
          max = cur;
        }
      }
    }
    // the answer is the maximum segment length of black cells
    ans = max;
    cout << ans << "\n";
  }
  return 0;
}
