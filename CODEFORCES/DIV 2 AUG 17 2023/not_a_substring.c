#include <stdio.h>
#include <string.h>

#define MAX_LEN 50

// Returns 1 if the given bracket sequence is regular, 0 otherwise.
int is_regular(char *s) {
  int n = strlen(s);
  int balance = 0;

  for (int i = 0; i < n; i++) {
    if (s[i] == '(') {
      balance++;
    } else {
      balance--;
    }

    if (balance < 0) {
      return 0;
    }
  }

  return (balance == 0);
}

// Returns a regular bracket sequence of length 2n that does not contain the given
// bracket sequence as a contiguous substring.
char *get_regular_sequence(char *s, int n) {
  char *t = malloc(sizeof(char) * (2 * n));
  int i, j;

  // Initialize the regular sequence to be all '(' characters.
  for (i = 0; i < 2 * n; i++) {
    t[i] = '(';
  }

  // Iterate over the given bracket sequence, replacing each '(' character with a
  // ')' character.
  for (i = 0; i < n; i++) {
    j = 2 * i;

    if (s[i] == '(') {
      t[j] = ')';
    }
  }

  return t;
}

int main() {
  int t, n;
  char s[MAX_LEN], *t;

  scanf("%d", &t);

  for (int i = 0; i < t; i++) {
    scanf("%s", s);
    n = strlen(s);

    // If the given bracket sequence is not regular, then there is no regular
    // bracket sequence that does not contain it as a contiguous substring.
    if (!is_regular(s)) {
      printf("NO\n");
      continue;
    }

    t = get_regular_sequence(s, n);
    printf("YES\n%s\n", t);
    free(t);
  }

  return 0;
}
