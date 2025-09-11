#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverseSubstring(char *str, int start, int end) {
  int i, j;
  char temp;
  for (i = start, j = end; i < j; i++, j--) {
    temp = str[i];
    str[i] = str[j];
    str[j] = temp;
  }
}

int main() {
  int t; // Number of test cases
  scanf("%d", &t);

  while (t--) {
    int n; // Length of the string
    int k; // Length of arrays l and r
    scanf("%d %d", &n, &k);

    char s[n + 1]; // String s
    scanf("%s", s);

    int l[k]; // Array l
    int r[k]; // Array r
    for (int i = 0; i < k; i++) {
      scanf("%d %d", &l[i], &r[i]);
    }

    int q; // Number of modifications
    scanf("%d", &q);

    int x[q]; // Description of the modifications
    for (int i = 0; i < q; i++) {
      scanf("%d", &x[i]);
    }

    for (int i = 0; i < q; i++) {
      int index = -1;
      for (int j = 0; j < k; j++) {
        if (l[j] <= x[i] && x[i] <= r[j]) {
          index = j;
          break;
        }
      }

      if (index == -1) {
        printf("Invalid modification\n");
        continue;
      }

      int start = x[i];
      int end = l[index] + r[index] - x[i];
      reverseSubstring(s, start, end);
    }

    printf("%s\n", s);
  }

  return 0;
}
