#include <stdio.h>
#include <string.h>

int is_palindrome(char *s) {
  int n = strlen(s);
  for (int i = 0; i < n / 2; i++) {
    if (s[i] != s[n - i - 1]) {
      return 0;
    }
  }
  return 1;
}

int can_remove_k_chars_to_form_palindrome(char *s, int k) {
  int n = strlen(s);

  // Create a frequency table for the characters in the string.
  int freq[26] = {0};
  for (int i = 0; i < n; i++) {
    freq[s[i] - 'a']++;
  }

  // Check if it is possible to remove k characters from the string such that the
  // remaining characters can be rearranged to form a palindrome.
  int odd = 0;
  for (int i = 0; i < 26; i++) {
    if (freq[i] % 2 == 1) {
      odd++;
    }
  }

  // If there are more than one odd frequency characters, then it is not possible
  // to remove k characters and form a palindrome.
  if (odd > 1) {
    return 0;
  }

  // If the number of characters to be removed is greater than the number of
  // odd frequency characters, then it is not possible to remove k characters
  // and form a palindrome.
  if (k > odd) {
    return 0;
  }

  // Otherwise, it is possible to remove k characters and form a palindrome.
  return 1;
}

int main() {
  int t;
  scanf("%d", &t);

  while (t--) {
    int n, k;
    scanf("%d %d", &n, &k);

    char s[n + 1];
    scanf("%s", s);

    if (can_remove_k_chars_to_form_palindrome(s, k)) {
      printf("YES\n");
    } else {
      printf("NO\n");
    }
  }

  return 0;
}
