
#include <stdio.h>

int main() {
  int t, n, m, i, a, b, d, flag;

  scanf("%d", &t);
  for (i = 0; i < t; i++) {
    scanf("%d %d", &n, &m);
    flag = 1;
    for (i = 0; i < m; i++) {
      scanf("%d %d %d", &a, &b, &d);
      if (d > 0) {
        if (a - d < b) {
          flag = 0;
          break;
        }
      } else {
        if (a + d > b) {
          flag = 0;
          break;
        }
      }
    }
    printf("%s\n", flag ? "YES" : "NO");
  }
  return 0;
}
