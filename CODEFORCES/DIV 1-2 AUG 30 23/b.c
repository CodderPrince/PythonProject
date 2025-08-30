#include <stdio.h>
#include <stdlib.h>

int main() {
  int t, n, x;
  int *p;

  scanf("%d", &t);
  for (int i = 0; i < t; i++) {
    scanf("%d", &n);
    p = malloc(sizeof(int) * n);
    for (int j = 0; j < n; j++) {
      scanf("%d", &p[j]);
    }

    int operations = 0;
    for (int j = 1; j < n; j++) {
      while (p[j] < j) {
        x = p[j];
        for (int k = j; k > p[j]; k--) {
          p[k] = p[k - 1];
        }
        p[p[j]] = x;
        operations++;
      }
    }

    printf("%d\n", operations);
    free(p);
  }

  return 0;
}
