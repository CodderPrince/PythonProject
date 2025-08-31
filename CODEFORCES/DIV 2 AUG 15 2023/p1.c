#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main() {
  int n, i, j, d, max_score = 0, current_score;
  scanf("%d", &n);
  for (i = 1; i <= n; i++) {
    current_score = 0;
    for (j = 1; j <= n; j++) {
      d = gcd(i, (i + j) % n + 1);
      if (d > 1) {
        current_score++;
      }
    }
    if (current_score > max_score) {
      max_score = current_score;
    }
  }
  for (i = 1; i <= n; i++) {
    if (max_score == current_score) {
      printf("%d ", i);
    }
    current_score--;
  }
  printf("\n");
  return 0;
}
