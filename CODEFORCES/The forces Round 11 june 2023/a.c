#include <stdio.h>
#include <stdlib.h>

int main() {
  int t;
  scanf("%d", &t);
  while (t--) {
    long long n;
    scanf("%lld", &n);

    // Calculate the minimum number of blue edges
    long long ans = 0;
    while (n > 0) {
      ans += n & 1;
      n >>= 1;
    }

    // Print the answer
    printf("%lld\n", ans);
  }

  return 0;
}
