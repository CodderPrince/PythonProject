#include <stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
  int t, n, m, k, H, i, j, res;
  scanf("%d", &t);
  while (t--) {
    scanf("%d%d%d%d", &n, &m, &k, &H);
    int h[n];
    for (i = 0; i < n; i++) {
      scanf("%d", &h[i]);
    }
    res = 0;
    for (i = 0; i < n; i++) {
      for (j = 0; j < n; j++) {
        if (i != j && h[i] != h[j] && (h[i] - h[j]) % k == 0 && i * k <= H && j * k <= H) {
          res++;
        }
      }
    }
    printf("%d\n", res);
  }
  return 0;
}
