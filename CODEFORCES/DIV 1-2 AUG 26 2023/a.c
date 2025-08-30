#include <stdio.h>
#include <string.h>

void swap(char *a, char *b) {
    char temp = *a;
    *a = *b;
    *b = temp;
}

void reverse(char *str, int start, int end) {
    while (start < end) {
        swap(&str[start], &str[end]);
        start++;
        end--;
    }
}

void lexicographically_smallest_string(int n, int k, char *s) {
    int i, j;

    // Step 1: Swap adjacent characters
    for (i = 0; i < n - 1; i += 2) {
        if (k == 0) {
            break;
        }
        swap(&s[i], &s[i + 1]);
        k--;
    }

    // Step 2: Reverse substrings of length k
    for (i = 0; i < n && k > 0; i += k) {
        if (k <= n - i - 1) {
            reverse(s, i, i + k - 1);
            k = 0;
        } else {
            reverse(s, i, n - 1);
            k -= n - i - 1;
        }
    }

    printf("%s\n", s);
}

int main() {
    int t;
    scanf("%d", &t);

    while (t--) {
        int n, k;
        scanf("%d %d", &n, &k);

        char s[n + 1];
        scanf("%s", s);

        lexicographically_smallest_string(n, k, s);
    }

    return 0;
}