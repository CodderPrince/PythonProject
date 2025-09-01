#include <stdio.h>

int main() {
  int t, n, l[100], sum = 0, flag = 1;
  scanf("%d", &t);
  while (t--) {
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
      scanf("%d", &l[i]);
      sum += l[i];
    }
    for (int i = 0; i < n; i++) {
      if (l[i] > sum - l[i]) {
        flag = 0;
        break;
      }
    }
    if (flag) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
    sum = 0;
    flag = 1;
  }
  return 0;
}
