#include <stdio.h>
#include <stdlib.h>

int green_apple_game(int n, int m, int k, int *a, int *b) {
  // Sort the values of Jellyfish's apples in ascending order.
  qsort(a, n, sizeof(int), compare_int);

  // Sort the values of Gellyfish's apples in ascending order.
  qsort(b, m, sizeof(int), compare_int);

  // Initialize the variables to store the sum of the values of the apples.
  int jellyfish_sum = 0;
  int gellyfish_sum = 0;

  // Calculate the sum of the values of Jellyfish's apples.
  for (int i = 0; i < n; i++) {
    jellyfish_sum += a[i];
  }

  // Calculate the sum of the values of Gellyfish's apples.
  for (int i = 0; i < m; i++) {
    gellyfish_sum += b[i];
  }

  // Play the game for k rounds.
  for (int i = 0; i < k; i++) {
    // If the round is odd, Jellyfish can swap apples.
    if (i % 2 == 1) {
      if (a[n - 1] < b[0]) {
        int temp = a[n - 1];
        a[n - 1] = b[0];
        b[0] = temp;

        jellyfish_sum += b[0] - a[n - 1];
        gellyfish_sum -= b[0] - a[n - 1];
      }
    }

    // If the round is even, Gellyfish can swap apples.
    else {
      if (b[m - 1] < a[0]) {
        int temp = b[m - 1];
        b[m - 1] = a[0];
        a[0] = temp;

        jellyfish_sum += a[0] - b[m - 1];
        gellyfish_sum -= a[0] - b[m - 1];
      }
    }
  }

  // Return the final sum of the values of Jellyfish's apples.
  return jellyfish_sum;
}

int compare_int(const void *a, const void *b) {
  return *(int *)a - *(int *)b;
}

int main() {
  int t;
  scanf("%d", &t);

  for (int i = 0; i < t; i++) {
    int n, m, k;
    scanf("%d %d %d", &n, &m, &k);

    int a[n];
    for (int j = 0; j < n; j++) {
      scanf("%d", &a[j]);
    }

    int b[m];
    for (int j = 0; j < m; j++) {
      scanf("%d", &b[j]);
    }

    int jellyfish_sum = green_apple_game(n, m, k, a, b);
    printf("%d\n", jellyfish_sum);
  }

  return 0;
}
